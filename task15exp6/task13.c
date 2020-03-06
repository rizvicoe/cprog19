/*
    Aim: WAP to find the greatest number amongst three entered numbers using conditional operator.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int num1,num2,num3,greatest;

    printf("\t**** Greatest Number Finder ****\n\n");

    printf("Enter Three Numbers seperated by comma (a,b,c):");
    scanf("%d,%d,%d",&num1,&num2,&num3);

    greatest = (num1>num2)?(num1>num3?num1:num3):(num2>num3?num2:num3);

    printf("Greatest Number is :%d",greatest);

    return 0;
}

