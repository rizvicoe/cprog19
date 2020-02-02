/*
    Aim: WAP to calculate the simple interest taking principal,rate of interest and no. of years as inputs from user.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{

    float principal,roi,period,simple_interest;

    printf("*** Simple Interest Calculator ***\n\n\n");

    printf("Enter the Principal:");
    scanf("%f",&principal);
    printf("Enter the Rate of Interest:");
    scanf("%f",&roi);
    printf("Enter the Period:");
    scanf("%f",&period);
    simple_interest = (principal*roi*period)/100;
    printf("Calculated Simple Interest: %.2f",simple_interest);
    return 0;
}
