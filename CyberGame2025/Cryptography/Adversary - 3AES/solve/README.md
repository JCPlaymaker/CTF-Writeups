We're provided with three AES keys and two pairs of encrypted messages (X and Y). 

The name of the challenge, "3AES", hints at some kind of triple-layer AES encryption, possibly inspired by 3DES. 

Our goal is to recover the hidden message or flag.

Given the name 3AES, we assumed a triple-AES scheme similar to 3DES:

Possibly chaining AES in ECB mode with three distinct keys.

Padding might not be used, so we assumed plaintexts are block-aligned.

By using a script that tries a DED mode, we get the flag

``SK-CERT{1_w0nd3r_why_th3y_d0nt_us3_7h1s_1rl}``
