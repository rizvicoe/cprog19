/*
    Aim: To find greatest number amongst three entered numbers
    Author: Prof. Shiburaj P.
    Class : FE Div C
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int number_1, number_2, number_3;
    system("cls");

    printf("\t**** Greatest Number Finder ****\n\n");

    // Get user input
    printf("Enter Number 1:");
    scanf("%d",&number_1);
    printf("Enter Number 2:");
    scanf("%d",&number_2);
    printf("Enter Number 3:");
    scanf("%d",&number_3);



    // Checking Greatest Number
    if(number_1 > number_2 && number_1 > number_3){
        printf("The greatest number is %d\n\n",number_1);
    }

    if(number_2 > number_1 && number_2 > number_3){
        printf("The greatest number is %d\n\n",number_2);
    }

    if(number_3 > number_1 && number_3 > number_2){
        printf("The greatest number is %d\n\n",number_3);
    }

    if(number_1 == number_2 && number_1 == number_3){
        printf("All numbers are equal\n\n");
    }

    system("pause");
    return 0;
}

