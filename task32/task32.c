/*
    Aim: Write a C program to find the Armstrong
         number between a given range of
         numbers using do while loop.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int a,i,digit,sum=0,temp;

    printf("*** Armstrong number Finder ***\n\n\n");

    printf("Enter Number:");
    scanf("%d",&a);
    temp = a;
    do {
        digit = temp%10;
        sum = sum + digit*digit*digit;
        temp = temp/10;
    }while(temp!=0);

    if(sum == a){
        printf("The Number is an Armstrong Number.");
    }else{
        printf("The Number is NOT an Armstrong Number.");
    }

    return 0;
}

