# I Forgot It

**Level**: Medium

Description:

```markdown
Julius uses the same password to log on to all of his favorites sites like Neopets, Club Penguin, and Webkinz. He's trying to log in, but forgot his password! He only has it written down in a code, can you help him get his password to log back in?

Flag format - `HTU{password}` (case insensitive)
```

## Writeup

This problem was composed of two steps - a Club Penguin cipher, followed by a Caesar Cipher. Decoding the picture using the Club Penguin cipher would result in `htyytsujslzns`. Shifting each character by 5 letters results in the flag.

**Flag** - `HTU{cottonpenguin}`
