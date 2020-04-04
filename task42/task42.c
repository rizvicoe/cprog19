/*
    Aim: Write a program in C to read n number of
         values in an array and display it in reverse order
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int a[30],n,i;

    printf("** Array Reverser **\n\n");

    printf("Enter No. of Elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter Element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Original:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nReversed:");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }

    return 0;
}

