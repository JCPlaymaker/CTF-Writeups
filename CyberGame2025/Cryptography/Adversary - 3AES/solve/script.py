from Crypto.Cipher import AES
import base64

# Clés depuis intercept.txt
key1_b64 = "h+NvKyaJFRhpn7lRWo0JGGcSk7TOd2ltibSSI1CGDCk="
key2_b64 = "CznIYU0rBgmzSb7WyqYfj+WKyDSXbbnsa8Wp/IRvUOc="
key3_b64 = "ihpLsXPURUTwH4ULO9/87rHRCQibQO6+V4/QKJL7Bgg="

# Donnée chiffrée
x1_b64 = "k8JzsMNxiG5KPGSdM/YjGjW7y8dzgG8vsQ3RB062Kz1/EzwUaWz5Sr2UFNuq0jcWqDdj3Y9I0UKz0rYdZuTxMHZ+oKVEqI8Xv9CuvOmOzkdBoBgsjaWT9ke6+BPcMH9Kpwq/jgoYVQ7SfJDKx5GCAxzSLyyS6tXGIZRrUny6jiU="

# Helpers
def decode_key(b64): return base64.b64decode(b64).ljust(32, b'\x00')
def aes_encrypt(data, key): return AES.new(key, AES.MODE_ECB).encrypt(data)
def aes_decrypt(data, key): return AES.new(key, AES.MODE_ECB).decrypt(data)

# Mode DED avec clé3 → clé2 → clé1
def triple_custom_mode(data, keys, mode):
    for action, key in zip(mode, keys):
        if action == 'E':
            data = aes_encrypt(data, key)
        else:
            data = aes_decrypt(data, key)
    return data

# Décodage des clés et de la donnée
keys = [decode_key(key3_b64), decode_key(key2_b64), decode_key(key1_b64)]
ciphertext = base64.b64decode(x1_b64)

# Déchiffrement avec DED
plaintext = triple_custom_mode(ciphertext, keys, "DED")

# Affichage
print(plaintext.decode("utf-8", errors="ignore"))

