#!/usr/bin/env python3
import random
import sys

# Configuration
total_funcs = 300
num_iteration = 10
vuln_types = ["double_free", "null_deref", "buffer_overflow", "infinite_loop", "stack_overflow"]

def main(output_file):
    # Randomly select 4 distinct function indices for vulnerabilities
    selected_indices = random.sample(range(1, total_funcs + 1), len(vuln_types))
    vuln_indices = dict(zip(selected_indices, vuln_types))

    # Generate random parameters for each function
    params = {}
    for idx in range(1, total_funcs + 1):
        off1, off2, off3, off4, off5, off6 = random.sample(range(1,16), 6)
        prime1 = random.choice([31, 37, 41, 43, 47, 53, 59, 61])
        prime2 = random.choice([29, 33, 35, 39, 45, 51, 55, 57])
        if idx in vuln_indices:
            magic_map = {
                "double_free": 0x42,
                "null_deref":   0x80,
                "buffer_overflow": 0xd5,
                "infinite_loop": 0x2e,
                "stack_overflow": 0xaa
            }
            magic = magic_map[vuln_indices[idx]]
        else:
            magic = random.randint(0, 255)
        params[idx] = (off1, off2, off3, off4, off5, off6, prime1, prime2, magic)

    # Output for verification
    print("Selected vulnerability functions and types:")
    for idx, vtype in vuln_indices.items():
        print(f"  obf_func_{idx} -> {vtype}")

    # Path for the generated challenge source
    path = output_file

    with open(path, 'w') as f:
        f.write("#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\n#include <stdint.h>\n\n")

        f.write(f'int iteration_depth = {num_iteration};\n')

        # Def of functions
        for i in range(1, total_funcs+1):
            f.write(f"void obf_func_{i}(int *x_{i}, unsigned char *data_{i}, size_t data_len_{i});\n")

        # File reader
        f.write("\nunsigned char *read_file(const char *path, size_t *len) {\n")
        f.write("    FILE *f = fopen(path, \"rb\"); if (!f) return NULL;\n")
        f.write("    fseek(f, 0, SEEK_END);\n")
        f.write("    long l = ftell(f);\n")
        f.write("    fseek(f, 0, SEEK_SET);\n")
        f.write("    if (l <= 0) { fclose(f); return NULL; }\n")
        f.write("    unsigned char *buf = malloc(l);\n")
        f.write("    fread(buf, 1, l, f);\n")
        f.write("    fclose(f);\n")
        f.write("    *len = l;\n")
        f.write("    return buf;\n")
        f.write("}\n\n")

        # Shuffle functions
        indices = list(range(1, total_funcs + 1))
        random.shuffle(indices)

        # Generate obfuscated functions
        for idx in random.sample(indices, total_funcs):
            next_idx = indices[(indices.index(idx) + 1) % total_funcs]
            off1, off2, off3, off4, off5, off6, prime1, prime2, magic = params[idx]
            vtype = vuln_indices.get(idx, "")

            f.write(f"void obf_func_{idx}(int *x_{idx}, unsigned char *data_{idx}, size_t data_len_{idx}) {{\n")
            # Build local buffer
            f.write(f"    char buf_{idx}[114];\n")
            #f.write(f"    unsigned char local_buf_{idx}[514];\n")
            f.write(f"    unsigned char* local_buf_{idx} = (unsigned char*)malloc(514);\n")
            f.write(f"    if (!local_buf_{idx}) return;\n")
            f.write("    for (int j = 0; j < 514; j++) {\n")
            f.write(f"        local_buf_{idx}[j] = j < data_len_{idx} ? data_{idx}[j] : 0;\n")
            f.write("    }\n\n")
            # Safe memcpy
            #f.write("    size_t copy_len = data_len < 114 ? data_len : 114;\n")
            #f.write("    memcpy(buf, local_buf, copy_len);\n\n")

            # Condition Calculation
            f.write(f"    unsigned char check_{idx} = (unsigned char)((uint32_t)local_buf_{idx}[{off1}] * {prime1} + local_buf_{idx}[{off2}]) ^ local_buf_{idx}[{off3}];\n")

            f.write(f"    if (data_len_{idx} > {max(off1,off2,off3)} && check_{idx} == 0x{magic:02x}) {{\n")

            # Embed vulnerability if this index is selected
            if vtype == "infinite_loop":
                f.write(f"        while (*x_{idx} >= 5){{\n")
                f.write(f"            if (*x_{idx} < 48763) (*x_{idx})++;\n")
                f.write("        }\n")

            if vtype == 'null_deref':
                f.write(f"        x_{idx} = 0;\n")

            # Dynamic copy_len with safe/unsafe for benign vs. overflow
            if vtype == "buffer_overflow":
                copy_len_max = 500
            else:
                copy_len_max = 114
            mod = random.randint(max(copy_len_max-112, 114-14), copy_len_max + 1)
            add = copy_len_max - (mod - 1)
            f.write(f"        size_t copy_len_{idx} = ((uint32_t)local_buf_{idx}[{off4}]*{prime2} + local_buf_{idx}[{off5}])^local_buf_{idx}[{off6}];\n")
            f.write(f"        copy_len_{idx} = (copy_len_{idx} % {mod}) + {add};\n")
            f.write(f"        memcpy(buf_{idx}, local_buf_{idx}, copy_len_{idx});\n")

            if vtype == 'double_free':
                f.write(f"        free(local_buf_{idx});\n")

            f.write("    }\n\n")
            f.write(f"    free(local_buf_{idx});\n")

            # Recursive call
            f.write(f"    if (*x_{idx} > 0) {{\n")
            if vtype=='stack_overflow':
                prev_3_idx = indices[(indices.index(idx) - 3) % total_funcs]
                f.write(f"        *x_{idx} -= 100 - data_len_{idx};\n")
                f.write(f"        obf_func_{prev_3_idx}(x_{idx}, data_{idx}, data_len_{idx});\n")
            else:
                f.write(f"        *x_{idx} -= 1;\n")
                f.write(f"        obf_func_{next_idx}(x_{idx}, data_{idx}, data_len_{idx});\n")
            f.write("    }\n")

            f.write("}\n\n")

        # Function pointer table
        f.write("typedef void (*func_t)(int*, unsigned char*, size_t);\n")
        f.write(f"static func_t func_table[{total_funcs+1}];\n")
        f.write("void init_table(void) {\n")
        f.write("    func_table[0] = NULL;\n")
        for i in range(1, total_funcs+1):
            f.write(f"    func_table[{i}] = obf_func_{i};\n")
        f.write("}\n\n")


        # Main function
        f.write("int main(int argc, char* argv[]) {\n")
        f.write("    if (argc < 2){\n        printf(\"Usage: %s <input_file>\\n\", argv[0]);\n        return 1;\n    }\n\n")
        f.write("    size_t len;\n")
        f.write("    unsigned char *data = read_file(argv[1], &len);\n")
        f.write("    if (!data){\n        perror(\"read_file\");\n        return 1;\n    }\n\n")
        f.write("    init_table();\n\n")
        f.write(f"    unsigned int idx = (len > 0 ? data[0] : 0) % {total_funcs} + 1;\n")
        f.write("    func_table[idx](&iteration_depth, data, len);\n\n")
        #f.write("    obf_func_1(10, data, len);\n")
        f.write("    free(data);\n")
        f.write("    return 0;\n")
        f.write("}\n")

    print(f"Generated a fuzzing challenge at {path}")

if __name__ == '__main__':
    if len(sys.argv)!=2:
        print(f"Usage: {sys.argv[0]} <output_file>")
        exit(1)
    main(sys.argv[1])
