# RE2

Description:

Now we up the game a little, good luck with this one!

## Solution

When you decompile this binary with Ghidra, you can learn that it basically checks every character of a submitted flag. If you just go character by character and map them to the values of a string, eventually you can determine the flag (wihch passes the check of running the binary)

Flag: `HTU{b0unc1ng_4r0und_funct10ns}`
