# Boardeeeeng

Level: Medium

Description:

Give the following to competitors:

```
C3PO: Oh my! This waiting around while master Luke goes to rescue the Princess has me on edge! I do hope he calls in soon.

R2D2: Beep boop beep beep!

C3PO: What's this you found? The Imperial intranet site? Good job R2!

R2D2: Bweep bwoop! Whistle-beep-beep... Bwoop!

C3P0: Now there's an idea! Can you get to Lord Vader's password? We might be able to use that to help Master Luke!

Flag format: HTU{flaghere}
```

Also provide challengers with the url to the website, and `boardeeeeng.zip` located in this directory.

## Solve Theory

The website will display the password for the user after they sign in. A sql injection payload in the username field such as `darthvader';--` will allow them to sign in unauthenticated.

After signing in, the user will be presented with the password for Darth Vader. The password is the flag.

`HTU{I_guesS_tHe_paSsWorD_is_tHe_FlAG!}`
