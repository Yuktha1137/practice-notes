---
title: "Compilation errors"
date: 2024-06-26
categories:
---

# C Compilation error
here is the **list of errors**

## welcome.c

### First error
Removing `>` at the end
```c
#include <stdio.h

int main(void)
{
    printf("Hello,how are you?\n\n");
}
```

compiler errors
```bash
welcome.c:1:18: error: expected '>'
```

### Second error
Removing `"` at the end
```c
#include <stdio.h>

int main(void)
{
    printf("Hello,how are you?\n\n);
}
```

compiler error
```bash
welcome.c:5:12: error: missing terminating '"' character
```


### Third error
Removing `;` at the end
```c
#include <stdio.h>

int main(void)
{
    printf("Hello,how are you?\n\n")
}
```

compiler error
```bash
welcome.c:5:37: error: expected ';' after expression
```

