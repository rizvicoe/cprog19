/*
    Aim: WAP to print the following pattern.
    Author: Prof. Shiburaj P.
*/

#include <stdio.h>

int main ()
{
    int n,i,j,k,count=0;
    printf("*** Pattern Printer ***\n\n\n");

    printf("Enter size of Pattern:");
    scanf("%d",&n);

    for(i=1,k=n;i<=n && k>=1;i++,k--){

        for(j=1;j<=i;j++){
            printf("%c",'A'+count);
            count++;
        }
        printf("   ");
        for(j=1;j<=k;j++){
            printf("%c",'P'+j-1);
        }
        printf("\n");

    }



    return 0;
}

