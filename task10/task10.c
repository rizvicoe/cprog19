/*
    Aim: WAP to calculate the gross salary of the employee given
         the basic salary. Travelling Allowance, Dearness Allowance
         and Home Rental Allowance is 20%, 80% and 15% of
         Basic Salary respectively.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    float basic_salary,ta,da,hra,gross_salary;

    printf("\t**** Salary Calculator ****\n\n");

    printf("Enter the Basic Salary:");
    scanf("%f",&basic_salary);

    ta = 0.2 * basic_salary;
    da = 0.8 * basic_salary;
    hra = 0.15 * basic_salary;

    gross_salary = basic_salary + ta + da + hra;

    printf("___________________________________________________\n\n");
    printf("1.\tBasic Salary\t\t=\t%.2f\n",basic_salary);
    printf("2.\tTravelling Allowance\t=\t%.2f\n",ta);
    printf("3.\tDearness Allowance\t=\t%.2f\n",da);
    printf("4.\tHome Rental Allowance\t=\t%.2f\n",hra);
    printf("___________________________________________________\n\n");
    printf("\tTotal Gross Salary\t=\t%.2f\n",gross_salary);
    printf("___________________________________________________\n\n");

    return 0;
}
