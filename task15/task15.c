/*
    Aim: WAP to find sum of two integers without using ‘+’ operator.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int num1,num2,sum;

    printf("\t**** Adder ****\n\n");

    printf("Enter Two Numbers seperated by comma (a,b):");
    scanf("%d,%d",&num1,&num2);

    sum = -1 * (- num1 - num2);

    printf("The Sum is :%d",sum);

    return 0;
}

