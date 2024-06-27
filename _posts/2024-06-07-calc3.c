---
title: "Calc3"
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
    int num4;
    int sum;
    printf("To add four numbers.\n");
    num1 = get_int("Enter the first number: ");
    num2 = get_int("Enter the second number: ");
    num3 = get_int("Enter the third number: ");
    num4 = get_int("Enter the fourth number: ");
    sum = num1 + num2 + num3 + num4;
    printf("The sum of %d , %d , %d , %d is %d.\n" , num1 , num2, num3 , num4 , sum);
}




practice/ $ make calc3
practice/ $ ./calc3
To add four numbers.
Enter the first number: 10921
Enter the second number: 5690
Enter the third number: 2361
Enter the fourth number: 9833
The sum of 10921 , 5690 , 2361 , 9833 is 28805.
practice/ $ 