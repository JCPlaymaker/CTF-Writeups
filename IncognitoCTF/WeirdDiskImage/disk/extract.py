key = b"r3c0nn3ct_th3_gr1d"
output = b""

# Concatenate all 4 files
files = ["noise1.bin", "noise2.bin", "noise3.bin", "random.bin"]
data = b""
for filename in files:
    with open(filename, "rb") as f:
        data += f.read()

# XOR decryption
for i in range(len(data)):
    output += bytes([data[i] ^ key[i % len(key)]])

# Save decrypted output
with open("final_output.bin", "wb") as f:
    f.write(output)

