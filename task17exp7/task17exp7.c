/*
    Aim: WAP to check if the year entered is a leap year or not.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int year;

    printf("\t**** Leap Year Finder ****\n\n");

    printf("Enter a year :");
    scanf("%4d",&year);

    if(year%400==0 || (year%4==0 && year%100==100)){
        printf("Its a Leap Year");
    }else{
        printf("The Year is Not a Leap Year");
    }

    return 0;
}

