/*
    Aim: Draw a flowchart and program to convert a lower case character to uppercase and vise-versa.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    char ch;

    printf("\t**** Case Converter ****\n\n");

    printf("Enter a Charachter :");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90){
        printf("Output : %c",ch+32);
    }else if(ch>=97 && ch<=122){
        printf("Output : %c",ch-32);
    }

    return 0;
}

