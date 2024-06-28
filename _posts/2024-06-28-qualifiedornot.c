---
title: "Qualified or not"
date: 2024-06-28
categories:
---


#include <cs50.h>
#include <stdio.h>
#include "telugu.h"
#define ee_marks_vasthe if
#define rakapothey else

int main(void)
{
    // To check whwether qualified or not.
    // Enni marks vachay?
    //
    // 40 and above vasthe:
    //  Qualify ayyav , manchi college lo seat odstadhi le.
    // rakapothe:
    //  Qualify avvaledu , intlo nik untadi le!
    int marks;
    marks = get_int("Enni marks vachay? ");

    ee_marks_vasthe (marks >= 40)
    {
        printf("Qualify ayyav , manchi college lo seat odstadhi le.");
    }
    rakapothey
    {
        printf("Qualify avvaledu , intlo nik untadi le!");
    }

}




$ cd practice
practice/ $ code qualifiedornot.c
practice/ $ make qualifiedornot
practice/ $ ./qualifiedornot
Enni marks vachay? 39
Qualify avvaledu , intlo nik untadi le!practice/ $ 



practice/ $ make qualifiedornot
practice/ $ ./qualifiedornot
Enni marks vachay? 81
Qualify ayyav , manchi college lo seat odstadhi le.practice/ $ 

