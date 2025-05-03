#!/usr/bin/env python3
from Crypto.Util.number import long_to_bytes, bytes_to_long
import sys
import re
from pwn import *
from functools import reduce

HOST = "140.112.91.4"
SOYO_PORT = 11452
ANON_PORT = 11451
recvall = lambda io: io.readrepeat(timeout=0.2)

def find_nth_root(x,n):
    """
    Finds the n'th root of x.
    """
    high = 1
    while high ** n <= x:
        high *= 2
    low = high//2
    root = -1
    while low <= high:
        mid = (low + high) // 2
        approx = pow(mid, n)
        if approx == x:
            return mid
        elif approx > x:
            high = mid - 1
        else:
            low = mid + 1
    raise ValueError('x does not have n\'th root')

def solve_a():
    soyo = connect(HOST, SOYO_PORT)
    anon = connect(HOST, ANON_PORT)

    soyo.sendline(b'1')
    match = re.search(r"\((\d+), (\d+)\)", soyo.recvline_contains(b"(e, n)").decode())
    e = int(match.group(1))
    n = int(match.group(2))

    blinding_factor = 2
    blinding_factor_inv = pow(blinding_factor, -1, n)
    assert (blinding_factor*blinding_factor_inv)%n == 1

    msg_text = b'name=soyo'
    msg = bytes_to_long(msg_text)
    blinded_msg = (msg * pow(blinding_factor, e, n)) % n

    soyo.sendline(b'2')
    soyo.sendline(long_to_bytes(blinded_msg))

    blinded_signature = int(soyo.recvline_contains(b"signature").decode().split(':',1)[-1].strip())
    recovered_signature = (blinded_signature * blinding_factor_inv) % n

    anon.sendlineafter(b'ID:', msg_text)
    anon.sendlineafter(b'Signature:', str(recovered_signature).encode())

    print(anon.recvline_contains(b'flag').decode())

    return msg_text, recovered_signature

def solve_b(ID, signature):
    c=list()
    n=list()
    e=7 # known public exponent, which is really small
    i=0
    while i<e:
        anon = connect(HOST, ANON_PORT)
        anon.sendlineafter(b'ID:', ID)
        anon.sendlineafter(b'Signature:', str(signature).encode())

        anon.sendline(b'1')
        _n = int(re.search(r"\((\d+), (\d+)\)", anon.recvline_contains(b"(e, n)").decode()).group(2))
        anon.sendline(b'2')
        _c = int(anon.recvline_contains(b'c:').decode().split(':',1)[-1].strip())
        n.append(_n)
        c.append(_c)

        anon.close()
        i += 1

    prod = reduce((lambda x, y: x * y), n)
    sum_=0
    for n_i, c_i in zip(n,c):
        p=prod//n_i
        sum_=(sum_+c_i*p*pow(p, -1, n_i))%prod

    flag = find_nth_root(sum_, e)
    print(long_to_bytes(flag).decode())


if __name__ == '__main__':
    ID, signature = solve_a()
    solve_b(ID, signature)
