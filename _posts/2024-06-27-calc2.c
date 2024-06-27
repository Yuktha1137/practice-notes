---
title: "Calc2"
date: 2024-06-27
categories:
---


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;
    int sum;
    printf("To add three numbers.\n");
    num1 = get_int("Enter the first number: ");
    num2 = get_int("Enter the second number: ");
    num3 = get_int("Enter the third number: ");
    sum = num1 + num2 + num3;
    printf("The sum of %d , %d and %d is %d.\n" , num1 , num2, num3 , sum);
}




practice/ $ make calc2
practice/ $ ./calc2
To add three numbers.
Enter the first number: 761
Enter the second number: 255
Enter the third number: 988
The sum of 761 , 255 and 988 is 2004.


