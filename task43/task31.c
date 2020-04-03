/*
    Aim: Write a program in C to sort elements of
         the array in aescending order.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int a[30],n,i,j,b[30],count=0;

    printf("** Array Sorter **\n\n");

    printf("Enter the Number of Elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter Number %d:",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(a[i]>a[j]){
                count++;
            }

        }
        if(count==0){
            b[i] = a[i];
            a[i] = 0;
        }
    }


    return 0;
}



