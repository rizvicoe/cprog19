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
    printf("\t%%\t:\tModulus:\n");
    printf("\t^\t:\tPower:\n");
    printf("\t$\t:\tSquare Root:\n\n\n");

    printf("Please Select Operation:");
    scanf(" %c",&operation);

    if(operation=='$'){
        printf("Enter Number:");
        scanf("%f",&num1);
    }else{
        printf("Enter First Number:");
        scanf("%f",&num1);
        printf("Enter Second Number:");
        scanf("%f",&num2);
    }


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
            printf("Invalid Operation");
    }

    printf("Answer : %.2f",ans);

    return 0;
}

