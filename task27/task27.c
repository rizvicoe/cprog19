/*
    Aim: WAP to find the sum and average of the numbers entered by the user.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int i,n,data;
    float sum=0,average;
    printf("*** Sum & Average Finder ***\n\n\n");

    printf("Enter the Number of Elements:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("Enter the %d Number:",i);
        scanf("%d",&data);
        sum = sum + data;
    }

    average = sum / n;

    printf("Sum = %.2f\n",sum);
    printf("Average = %.2f\n",average);

    return 0;
}

