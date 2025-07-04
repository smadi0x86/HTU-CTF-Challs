# 0verflow

Level: Medium

Description:

```
Please don't enter the Declaration of Independence.

**`Use netcat to run the binary quickly from below!`**

[overflow]
```

## Writeup

This is a very simple buffer overflow. The `vulnerable()` function takes in 64 characters and fits it in a buffer with only 0x30 bytes of space. This means that the extra characters will overflow into the stack. The item just above the buffer is the `key` variable, which is initially set to 0xc. If you put in 60 garbage characters followed by `1234`, then the buffer will be filled and the last four characters will set the value of `key` to 0x34333231. This allows us to run the `win()` function and get the flag.

Example:

```
$ ./overflow
Enter a text please: aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa1234
Your flag is HTU{s1mpl3e_0vErfl0w_bUG_1n_C}
```

**Flag** - `HTU{s1mpl3e_0vErfl0w_bUG_1n_C}`

## Notes

`overflow` was compiled with `gcc -o overflow overflow.c`.
