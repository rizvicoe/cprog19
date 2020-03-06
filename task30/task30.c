/*
    Aim: WAP to the following series where user enters the
         value for n. Also compute the value of the series.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    int n,i,j,sum=0;
    printf("*** Sequence Printer ***\n\n\n");

    printf("Enter n:");
    scanf("%d",&n);

    printf("1 ");
    for(i=1;i<=n;i++){
        printf("+ 1/%d ",(int)pow(2,i));
        sum = sum + pow(2,i);
    }

    printf("\n\nValue of Series: %d",sum);

    return 0;
}

