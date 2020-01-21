/*
*   Aim: to calculate the simple interest taking principal,
*        rate of interest and no. of years as inputs from user.
*   Author: Prof. Shiburaj
*   Class: Div C
*/

#include <stdio.h>

int main()
{
    float principal,rate_of_interest,years,simple_interest;

    printf("*** Simple Interest Calculator ***\n\n");

    printf("Enter Principal Amount:");
    scanf("%f",&principal);

    printf("Enter Rate of Interest (in percentage):");
    scanf("%f",&rate_of_interest);

    printf("Enter No. of Years:");
    scanf("%f",&years);

    simple_interest = (principal * rate_of_interest * years)/100;

    printf("\n\nCalculated Simple Interest: %.2f", simple_interest);


    return 0;
}
