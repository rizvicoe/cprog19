/*
    Aim: WAP to calculate the sum and average of three numbers.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{

    int num1,num2,num3,sum;
    float average;

    printf("*** Sum and Average Calculator ***\n\n\n");

    printf("Enter the Three Numbers seperated by comma:");
    scanf("%d,%d,%d",&num1,&num2,&num3);
    sum = num1+num2+num3;
    average = sum/3.0;
    printf("Sum: %d\n",sum);
    printf("Average: %.2f",average);
    return 0;
}
