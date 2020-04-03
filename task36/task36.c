/*
    Aim: Write a program in C to check a given
         number is even or odd using the functions.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
void check(int num){
    if(num%2==0){
        printf("The Number is Even");
    }else{
        printf("The Number is Odd");
    }
}

int main ()
{
    int num;

    printf("** Even Odd Checker **\n\n");

    printf("Enter a Number:");
    scanf("%d",&num);

    check(num);

    return 0;
}

