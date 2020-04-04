/*
    Aim: Write a program in C to check if the entered
         string is palindrome or not.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char a[50];
    int i=0,length;

    printf("** Palindrome Checker**\n\n");

    printf("Enter a String:");
    gets(a);
    length = strlen(a);
    while(a[i]!='\0'){
        if(a[i]!=a[length-1-i]){
            printf("The Entered String is Not a Palindrome.");
            return 0;
        }
        i++;
    }

    printf("The Entered String is a Palindrome.");

    return 0;
}

