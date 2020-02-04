/*
    Aim: WAP to swap two numbers without the help of a Temporary Number.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int num1,num2;

    printf("\t**** Swaping Numbers ****\n\n");

    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);

    printf("Before Swapping:\n");
    printf("\tNumber 1 : %d\n",num1);
    printf("\tNumber 2 : %d\n\n\n",num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swapping:\n");
    printf("\tNumber 1 : %d\n",num1);
    printf("\tNumber 2 : %d\n\n\n",num2);
    return 0;
}
