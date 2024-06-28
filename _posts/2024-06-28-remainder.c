---
title: "Remainder"
date: 2024-06-28
categories:
---



Finding the remainder of two numbers



#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int remainder;
    printf("To find the remainder of two numbers.\n");
    num1 = get_int("Enter first number: ");
    num2 = get_int("Enter second number: ");
    remainder = num1 % num2;
    printf("The sum of %d and %d is %d.\n" , num1 , num2 , remainder);
}



practice/ $ code remainder.c
practice/ $ make remainder
practice/ $ ./remainder
To find the remainder of two numbers.
Enter first number: 196
Enter second number: 12
The sum of 196 and 12 is 4.
practice/ $ 

