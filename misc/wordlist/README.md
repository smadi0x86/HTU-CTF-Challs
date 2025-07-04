# Wordlist

**Level**: Hard

Description:

```markdown
Password cracking is really cewl, but so is learning how to generate the best wordlists for it. My buddy Dave found his password on [this website designed for scraping](http://books.toscrape.com/). What was it?

`$2a$12$mC18DWLZHlNaMUpSjtgZguFc6fzE6R4VCQUbRErbzP.y0S84Tb0/6`

Flag format - `HTU{password}`
```

## Writeup

The key to this challenge is in the description - "password cracking is really **_cewl_**". [Cewl](https://github.com/digininja/CeWL) is a scraping tool designed to pull commonly used words to make wordlists. Deploying Cewl against this website for about a minute and using the wordlist generated from it will result in you finding the password, `Guillebeau`.

**Flag** - `HTU{Guillebeau}`
