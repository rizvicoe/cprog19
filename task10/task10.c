/*
    Aim: WAP to calculate the gross salary of the employee given the basic salary.
         Travelling Allowance, Dearness Allowance and Home Rental Allowance is 20%,
         80% and 15% of Basic Salary respectively.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    float basic,gross,hra,ta,da;

    printf("\t**** Gross Salary Calculator ****\n\n");

    printf("Enter the Basic Salary:");
    scanf("%f",&basic);

    ta = basic * 0.2;
    da = basic * 0.8;
    hra = basic * 0.15;
    gross = basic + ta + da + hra;

    printf("Basic Salary\t\t = Rs. %.1f\n",basic);
    printf("Travelling Allowance \t = Rs. %.1f\n",ta);
    printf("Dearness Allowance\t = Rs. %.1f\n",da);
    printf("Home Rental Allowance\t = Rs. %.1f\n",hra);
    printf("Gross Salary\t\t = Rs. %.1f\n",gross);
    return 0;
}
