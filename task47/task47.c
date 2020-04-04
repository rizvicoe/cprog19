/*
    Aim: Write a program in C to find the length
         of a string without using library function
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    char a[50];
    int i=0;

    printf("** String Length Calculator**\n\n");

    printf("Enter a String:");
    gets(a);

    while(a[i]!='\0'){
        i++;
    }

    printf("Length of String is %d",i);

    return 0;
}


