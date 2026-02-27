# P4: TESTING in the FUZZ

> [!IMPORTANT]
> The problem is adapted from [CNS 2024](https://www.csie.ntu.edu.tw/~hchsiao/courses/cns24.html) HW3 P1, designed by 楊偉倫.





## Instruction for TAs
### Private Files (whose contents should be unbeknownst to students)
+ [`fuzz-me.c`](./fuzz-me.c)
+ [`fuzz-me-obfuscated.c`](fuzz-me-obfuscated.c)
+ [`answer.txt`](./answer.txt)
+ [`generate_challenge.py`](./generate_challenge.py)

### Public Files (which should be given to students)
+ [`fuzz-me`](./fuzz-me)
+ [`example.md`](./example.md)

### How to create a new challenge binary ([`fuzz-me`](fuzz-me))
1. Generate a structured yet random and complex C code by
    ```sh
    ./generate_challenge.py fuzz-me.c
    ```
2. Clone this repo: [C code obfuscator](https://github.com/Forever-CodingNoob/c-obfuscator/blob/master/), and use the obfuscator inside to obfuscate the complex C code generated in the preceding step.
    ```sh
    ./obfuscator.py fuzz-me.c
    ```
3. Compile the obfuscated C code to use as the challenge for this problem:
    ```sh
    gcc -o fuzz-me fuzz-me-obfuscated.c
    ```
    where `fuzz-me-obfuscated.c` is the file obtained in the preceding step.
4. Now you have the binary file [`fuzz-me`](./fuzz-me), which, along with [`example.md`](./example.md), are the only files the students should be seeing.
