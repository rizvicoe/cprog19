/*
    Aim: WAP to print the following pattern.
                **
               ****
              ******
             ********
              ******
               ****
                **
    Author: Prof. Shiburaj P.
*/

#include <stdio.h>

int main ()
{
    int n,i,j,k;
    printf("*** Pattern Printer ***\n\n\n");

    printf("Enter size of Pattern:");
    scanf("%d",&n);

    for(i=n,k=1;i>=1 && k<=n;i--,k++){
        for(j=1;j<=i;j++){
            printf("-");
        }
        printf("\n");
        for(j=1;j<=k;j++){
            printf("-");
        }
        printf("\n");

    }



    return 0;
}

