# PWNTools

**Level**: Medium
Description:

```
You're solving a binary exploitation (pwn) CTF problem with a Python script and the `pwntools` Python module. You can manually run the exploit in GDB, but are having trouble getting your script to do the same thing. You decide to use the built-in GDB debugging functionality of `pwntools`, but it's missing a dependency on your system. You've already installed GDB, what else do you need to install?

Flag format - `HTU{programname}`
```

## Writeup

Its pretty easy, it has something tricky in it, when you install gdb you also need to install `gdbserver` to run the script, gdbserver is a program that allows you to run GDB on a different machine than the one which is running the program being debugged (remote debugging).

Flag: `HTU{gdbserver}`
