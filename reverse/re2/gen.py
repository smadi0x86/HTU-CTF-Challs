flag = "HTU{b0unc1ng_4r0und_funct10ns}"
flaglist = [(i, flag[i]) for i in range(len(flag))]

import random

alreadySeen = []

for i in range(len(flag)):
    while True:
        rand = random.randint(
            0, len(flag) - 1
        )  # Use len(flag) - 1 to stay within bounds
        if rand not in alreadySeen:
            alreadySeen.append(rand)
            print(flaglist[rand])
            break
