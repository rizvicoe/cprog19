/*
    Aim: To find sum and average of three numbers
    Author: Prof. Shiburaj P.
    Class : FE Div C
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int number_1, number_2;
    system("cls");

    printf("\t**** Swap Two Number (Without Temporary Variable) ****\n\n");

    // Get user input
    printf("Enter Number 1:");
    scanf("%d",&number_1);
    printf("Enter Number 2:");
    scanf("%d",&number_2);

    printf("Before Swaping \n\tNumber 1 = %d\n\tNumber 2 = %d\n\n", number_1, number_2);

    // Swapping
    number_1 = number_1 + number_2;     // 5 = 3 + 2
    number_2 = number_1 - number_2;     // 3 = 5 - 2
    number_1 = number_1 - number_2;     // 2 = 5 - 3

    printf("After Swaping \n\tNumber 1 = %d\n\tNumber 2 = %d\n\n", number_1, number_2);

    system("pause");
    return 0;
}

