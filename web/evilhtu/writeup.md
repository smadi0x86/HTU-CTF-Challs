# EvilHTU

Description:

The evil Dr Doofenshmirtz has pwned all of HTU's computers and it only displays this web page, can you assist Agent S. in taking him and his supporters down before it wipes HTU off the map???

## Solution

1. **Step 1**: Open the website in a web browser and explore.
2. **Step 2**: Use the inspector and view the cookies, noting the user cookie.
3. **Step 3**: Put the cookie in a base64 decoder, and reverse the string. It will say `user=public_user,inator_self_destruct=false`
4. **Step 4**: change the user to admin, and the inator self destruct to true in the cookie `user=admin,inator_self_destruct=true`. Reverse the text and base64 encode it.
5. **Step 5**: in the inspector of the webpage, edit the cookie the browser gave you and insert the string made in the step above. Refresh the page and retreive the flag.

## Flag

The flag for this challenge is `HTU{sma$dI-aNd-h1s-cl$3nt-s$d3-co0ok13-4uTh2nt1c4t10N}`
