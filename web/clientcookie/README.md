# Client Cookie

Description:

There is a flag hiding somewhere on this site... can you find it?

## Solution

If you look at the cookies on the site, you can see `role - FD6C` is a cookie set. The FD6C is actually a ROT47 encoding of 'user'. If you ROT47 encode "admin", the ciphertext is "25>:?". If you set the `role` cookie to the value of `25>:?` and then access the /flag endpoint, you get the flag. If you try to access the /flag endpoint without a valid cookie, you just receive a "Not authorized" response.

FLAG: HTU{c0okies_should_NOT_authenticate_client$ide!}
