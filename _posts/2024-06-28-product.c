---
title: "Product"
date: 2024-06-28
categories:
---


Finding product of two numbers:



#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int product;
    printf("To find the product of two numbers.\n");
    num1 = get_int("Enter first number: ");
    num2 = get_int("Enter second number: ");
    product = num1 * num2;
    printf("The product of %d and %d is %d.\n" , num1 , num2 , product);
}


$ make product
$ ./product
To find the product of two numbers.
Enter first number: 287
Enter second number: 913
The product of 287 and 913 is 262031.
