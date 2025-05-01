import base64

def rot47(s):
    out = ''
    for c in s:
        o = ord(c)
        if 33 <= o <= 126:
            out += chr(33 + ((o - 33 + 47) % 94))
        else:
            out += c
    return out

def xor_decrypt(data, key):
    return bytes([b ^ key[i % len(key)] for i, b in enumerate(data)])

ct = "PFFUQYTUONPSK5LAMNDXGJ35ER4CM5C7ORETY3A="

step1 = base64.b32decode(ct)

step2 = rot47(step1.decode('latin1'))

step3 = base64.b64decode(step2)

key = b"duck"
flag = xor_decrypt(step3, key)

print("Flag:", flag.decode())
