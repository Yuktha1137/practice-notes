---
title: "Positive or Negative"
date: 2024-07-02
categories:
---

To print Positive or Negative number :

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    num = get_int("Enter a number : ");
    // To find whether the given number is positive or negative :
    if (num > 0)
    {
        printf("%d is a positive number.\n" , num);
    }
    else
    {
        printf("%d is a negative number.\n" , num);
    }

}


```



$ make positivenegative
$ ./positivenegative
Enter a number : 56
56 is a positive number.
$ 
