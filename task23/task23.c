/*
    Aim: Modify the previous program to run repeatedly
         along with a exit condition using goto.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    float num1,num2,ans;
    char operation;
    start:
    system("cls");
    printf("*** Basic Calculator ***\n\n\n");

    printf("Please Select Operation:\n");
    printf("\t+\t:\tAddition:\n");
    printf("\t-\t:\tSubtraction:\n");
    printf("\t*\t:\tMultiplication:\n");
    printf("\t/\t:\tDivision:\n");
    printf("\t%%\t:\tModulus:\n");

    printf("\t^\t:\tPower:\n");
    printf("\t$\t:\tSquare Root:\n");
    printf("\tx\t:\tExit:\n\n");

    scanf(" %c",&operation);
    printf("Operator : %c\n",operation);
    if(operation=='x'){
        return 0;
    }

    printf("Enter First Number:");
    scanf("%f",&num1);
    printf("Enter Second Number:");
    scanf("%f",&num2);

    switch(operation){
        case '+':
            ans = num1+num2;
            break;
        case '-':
            ans = num1-num2;
            break;
        case '*':
            ans = num1*num2;
            break;
        case '/':
            ans = num1/num2;
            break;
        case '%':
            ans = (int)abs(num1)%(int)abs(num2);
            break;
        case '^':
            ans = pow(num1,num2);
            break;
        case '$':
            if(num1<0){
                printf("Square root of a Negative Number is Not Possible.");
                return 0;
            }
            ans = sqrt(num1);
            break;
        default:
            printf("\nInvalid Operation\n");
            system("pause");
            goto start;
    }

    printf("Answer : %.2f\n\n\a",ans);
    system("pause");
    goto start;

    return 0;
}

