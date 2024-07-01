---
title: "EvenorOdd"
date: 2024-07-01
categories:
---


printing odd or even number



```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;
    num = get_int("Enter a number : ");
    // To finf whether the number is even or odd :
    if (num % 2)
    {
        printf("%d is an even number.\n" , num);
    }
    else
    {
        printf("%d is an odd number.\n" , num);
    }
}

 
```



2024-07-01/ $ make evenorodd
2024-07-01/ $ ./evenorodd
Enter a number : 1979
1979 is an even number.
2024-07-01/ $ 