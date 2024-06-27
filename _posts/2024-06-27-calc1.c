---
title: "Calc1"
date: 2024-06-27
categories:
---


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int sum;
    printf("To add two numbers.\n");
    num1 = get_int("Enter first number: ");
    num2 = get_int("Enter second number: ");
    sum = num1 + num2;
    printf("The sum of %d and %d is %d.\n" , num1 , num2 , sum);
}


$ cd practice
practice/ $ code calc1.c
practice/ $ make calc1
practice/ $ ./calc1
To add two numbers.
Enter first number: 1125
Enter second number: 1093
The sum of 1125 and 1093 is 2218.
