/*
    Aim: Write a program in C reverse a string using string.h library
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

#include <string.h>

int main ()
{
    char a[50];
    int i=0,length;

    printf("** String Reverser**\n\n");

    printf("Enter a String:");
    gets(a);

    strrev(a);

    printf("Reversed String:%s\n\n",a);

    return 0;
}

