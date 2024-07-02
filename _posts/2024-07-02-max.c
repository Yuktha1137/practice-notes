---
title: "Max"
date: 2024-07-02
categories:
---

To find the maximum number :


```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int max;
    num1 = get_int("Enter the first number: ");
    num2 = get_int("Enter the second number: ");
    max = (num1 > num2)? num1 : num2;

    // Finding the maximum
    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    printf("The maximum of %d and %d is %d\n" , num1, num2, max);

}


```

$ code max.c
$ make max
$ ./max
Enter the first number: 182
Enter the second number: 58
The maximum of 182 and 58 is 182
$ 
