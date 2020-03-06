/*
    Aim: WAP to print Fibonacci Series till number entered by the user is reached.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int n,x1=0,x2=1,temp;
    printf("*** Fibonacci Series ***\n\n\n");

    printf("Enter the maximum number:");
    scanf("%d",&n);

    printf("0 ");
    for(;x2<=n;){
        printf("%d ",x2);
        temp = x1;
        x1 = x2;
        x2 = temp + x2;
    }

    return 0;
}

