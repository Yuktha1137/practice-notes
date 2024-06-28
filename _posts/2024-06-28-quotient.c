---
title: "Quotient"
date: 2024-06-28
categories:
---

Finding the quotient of two numbers



#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int quotient;
    printf("To find the quotient of two numbers.\n");
    num1 = get_int("Enter first number: ");
    num2 = get_int("Enter second number: ");
    quotient = num1 / num2;
    printf("The sum of %d and %d is %d.\n" , num1 , num2 , quotient);
}




$ cd practice
practice/ $ code quotient.c
practice/ $ make quotient
practice/ $ ./quotient
To find the quotient of two numbers.
Enter first number: 80
Enter second number: 5
The sum of 80 and 5 is 16.
practice/ $ 
