# calc.exe

Level: Hard

Description:

We think somebody put a backdoor in Windows Calculator! Can you find the
secret password?

## Write-up

This is my favourite problem ever :)

I hacked up the Windows calculator to accept a code, then when the code is fully
entered, use it to decrypt and display the flag.

The code is randomly selected when it's compiled, but the code for the version
checked into git is:

    + + 1 3 1 / / 5

If you type that code in (press esc first, just to be sure), you should see a
popup!

If you run `make`, it'll re-generate the binary, including embedding `FLAG` that
is embedded in `do_patch.rb`.

flag: CTF{LAUNCHED!~}
