/*
    Aim: WAP to design calculator with basic operations using switch.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    float num1,num2,ans;
    char operation;

    printf("*** Basic Calculator ***\n\n\n");


    printf("\t+\t:\tAddition:\n");
    printf("\t-\t:\tSubtraction:\n");
    printf("\t*\t:\tMultiplication:\n");
    printf("\t/\t:\tDivision:\n");
    printf("\t%%\t:\tModulus:\n\n\n");
    printf("Please Select Operation:");
    scanf("%c",&operation);

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

        default:
            printf("Invalid Operation");
    }

    printf("Answer : %.2f",ans);

    return 0;
}

