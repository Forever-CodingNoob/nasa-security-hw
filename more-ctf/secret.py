#!/usr/bin/env python3
from Crypto.Util.number import getPrime


def gen_lcg_params():
    m = getPrime(1024)
    a = getPrime(512)
    c = getPrime(512)
    print(f"a = {hex(a)}\n c = {hex(c)}\n m = {hex(m)}")


lcg_param = {
    'a': 0xca4685f319c3343390710697b0a11a9f5574e670d29917be45eb75fadbef6191602874a26a92274e12a7ed469d7047e123608397a8bbb1a830fd83519424c96f,
    'c': 0x86b9144718c5350785f4bc8259bf94e5b3411c2d4223571dd915e229099791baabbb80e2ae258d55e12175f42dd5d38a2121012fcea34d2aa44be878c8f2b379
}

FLAG1 = r"NASA_HW11{pseudorandomness_does_not_guarantee_unpredictability}"
FLAG2 = r"LinearAlgebraMidterm Name:Fatcat Score:86 Flag:NASA_HW11{07p_k3y_mu57_b3_47_l3457_45_l0n6_45_pl41n73x7}"
FLAG3 = r"NASA_HW11{https://youtu.be/1GxwDuV5JMc}"
FLAG4 = r"NASA_HW11{y0u_KN0w_r3F13C710n_4774cK}"

club_shared_key = r"hY*Hdiv9gv*&7KXiz%C%rzPc!66ZW29V"
