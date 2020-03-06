/*
    Aim: WAP to find if the entered number is a prime number or not.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int i,num;
    printf("*** Prime Number Finder ***\n\n\n");

    printf("Please a Number:");
    scanf("%d",&num);

    for(i=2;i<num;i++){
        if(num%i==0){
            printf("The number is not a Prime Number");
            return 0;
        }
    }

    printf("The number is a Prime Number");

    return 0;
}

