/*
    Aim: WAP to print the following pattern.
            *
            **
            ***
            ****
            *****
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int n,i,j;
    printf("*** Pattern Printer ***\n\n\n");

    printf("Enter size of Pattern:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

