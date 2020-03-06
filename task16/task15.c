/*
    Aim: Write an algorithm and program to find if the entered character is a vovel or not.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    char ch;

    printf("\t**** Vovel Finder ****\n\n");

    printf("Enter a Charachter :");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
        printf("The entered charachter is a Vowel.");
    }else{
        printf("The entered charachter is a Consonant.");
    }

    return 0;
}

