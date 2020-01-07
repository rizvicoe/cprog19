/*
    Aim: To find sum and average of three numbers
    Author: Prof. Shiburaj P.
    Class : FE Div C
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float number_1, number_2, number_3, sum, average;
    system("cls");

    printf("\t**** Sum & Average Calculator ****\n\n");

    // Get user input
    printf("Enter Number 1:");
    scanf("%f",&number_1);
    printf("Enter Number 2:");
    scanf("%f",&number_2);
    printf("Enter Number 3:");
    scanf("%f",&number_3);

    // Calculations
    sum = number_1 + number_2 + number_3;
    average = sum / 3;

    printf("Sum of the Numbers = %f\n",sum);
    printf("Average of the Numbers = %f\n",average);



    system("pause");
    return 0;
}
