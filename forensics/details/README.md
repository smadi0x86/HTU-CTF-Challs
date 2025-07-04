# Details

**Level**: Easy

Description:

```markdown
Meta-what?

[steg-flag3.png]
```

## Writeup

The flag can be found by opening up the photo in Notepad. It was originally stored using a metadata comment, and so is also accessible through a Linux tool like `exiftool` or Windows photo details.

![](solution.png)

**Flag** - `ctf{always_look_for_details!}`
