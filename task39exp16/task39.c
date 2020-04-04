/*
    Aim: Write a program in C to find the
         Factorial of a number using recursion
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
int calc_factorial(int num){
    if(num<=0){
        return 1;
    }
    return num * calc_factorial(num-1);
}

int main ()
{
    int num,fact;

    printf("** Factorial Finder **\n\n");

    printf("Enter a Number:");
    scanf("%d",&num);

    fact = calc_factorial(num);

    printf("Factorial of %d is %d.",num,fact);

    return 0;
}



