/*
    Aim: WAP to check if the number is even or not using conditional operator.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int a;

    printf("\t**** Even / Odd ****\n\n");

    printf("Enter Number:");
    scanf("%d",&a);

    (a%2==0)?printf("The number is Even"):printf("The number id Odd");

    return 0;
}
