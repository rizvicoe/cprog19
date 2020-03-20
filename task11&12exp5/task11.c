/*
    Aim: WAP to swap two numbers with the help of a Temporary Number.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int num1,num2,temp;

    printf("\t**** Swaping Numbers ****\n\n");

    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);

    printf("Before Swapping:\n");
    printf("\tNumber 1 : %d\n",num1);
    printf("\tNumber 2 : %d\n\n\n",num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swapping:\n");
    printf("\tNumber 1 : %d\n",num1);
    printf("\tNumber 2 : %d\n\n\n",num2);
    return 0;
}
