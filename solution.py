#!/usr/bin/env python3
from Crypto.Util.number import long_to_bytes
import sys
import hashlib
import re
from pwn import *


HOST = "140.112.91.4"
PORT = 1234
recvall = lambda io: io.readrepeat(timeout=0.2)

def solve_a():
    io = connect(HOST, PORT)

    m = 0xa34d80e56c2cd0d35209cb13e5665fc58176fac6b1fee26af23388deebee59da1a884cbba6111ea819f7a2059f0accd8b1e7e23dbe4d90896b2cd482c0b934d97e3bbdbfd26b968e9bfeb2f8df037cab44557d2cf6eb57385a191c3db536c62f781e598405bdd818ae98dfd7df48c4da55d9d5b49d75aa46c91a27a186b9bf77
    io.sendline(b'1')
    io.sendline(b'0')
    n1 = int(io.recvline_contains(b'picked').decode().split(',')[-2].split(' ')[-1])
    io.sendline(b'1')
    io.sendline(b'0')
    n2 = int(io.recvline_contains(b'picked').decode().split(',')[-2].split(' ')[-1])
    io.sendline(b'1')
    io.sendline(b'0')
    n3 = int(io.recvline_contains(b'picked').decode().split(',')[-2].split(' ')[-1])

    a = ((n3-n2)*pow(n2-n1, -1, m))%m
    c = (n2 - a * n1)%m

    guess = n3
    for _ in range(100):
        guess = (a*guess+c)%m
        io.sendline(b'1')
        io.sendline(str(guess).encode())

    io.sendline(b'2')
    print(io.recvline_contains(b'Here is the flag for you').decode().split()[-1])

def solve_b():
    io = connect(HOST, PORT)
    io.sendline(b'3')
    io.recvline_contains(b'one-time pad')
    c_hex = io.recvline().decode().strip()
    c=bytearray.fromhex(c_hex)
    key_len = 10
    keyword = b"NASA_HW11{"
    for i in range(0, len(c)-len(keyword)+1):
        key_part = bytes([_a ^ _b for _a, _b in zip(keyword, c[i:i+len(keyword)])])
        offset=(key_len - i % key_len) % key_len
        ans=bytes([c[j]^key_part[(j+offset)%key_len] if (j+offset)%key_len<len(key_part) else ord(" ") for j in range(len(c))])
        ans=bytes([j if j>=32 and j<127 else ord(" ") for j in ans])
        print(f"[{i}]: ", ans.decode())
    # the "real" plaintext the found by observing the output
    # "[47]:  LinearAlgebraMidterm Name:Fatcat Score:86 Flag:NASA_HW11{07p_k3y_mu57_b3_47_l3457_45_l0n6_45_pl41n73x7}" looks the most human-readable and meaningful

def solve_c():
    answers={hashlib.md5(f'{i}'.encode()).hexdigest()[0:8]:i for i in range(2**24)}
    io = connect(HOST, PORT)

    while True:
        io.sendlineafter(b'Your choice: ', b'4')
        for _ in range(10):
            hash_= io.recvuntil(b' : ').decode()[38:46]
            io.sendline(str(answers[hash_]).encode())
        msg = io.recvline_contains(b'PoWs').decode().strip()
        rate = int(re.match(r'Wow! You can solve (\d+)\.\d* PoWs per second!', msg).group(1))
        print("rate:", rate)
        if rate >= 150:
            break
    print(io.recvline_contains(b'flag').decode().strip())


def solve_d():
    io_prover, io_verifier = connect(HOST, PORT), connect(HOST, PORT)
    io_verifier.sendline(b'5')
    io_prover.sendline(b'6')

    nonce = io_verifier.recvline_contains(b'nonce:').decode().split()[-1]
    io_prover.sendline(nonce.encode())
    proof = io_prover.recvline_contains(b'Proof:').decode().split(' ')[-1]
    mac = proof.split('||')[-1]
    io_verifier.sendline(f"tiaosu||{mac}".encode())

    print(io_verifier.recvline_contains(b'flag:').decode().split()[-1])


if __name__=='__main__':
    arg=sys.argv[1]
    match arg:
        case "a":
            solve_a()
        case "b":
            solve_b()
        case "c":
            solve_c()
        case "d":
            solve_d()
