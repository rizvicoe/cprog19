/*
    Aim: Using pointers, write a function that recieves
         a charachter string and a charachter as argument
         and deletes all occurences of this charachter
         in the string and prints the corrected
         string without any holes.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
void format_string(char msg[],char d){
    int i=0,j=0;
    while(msg[i]!='\0'){
        if(msg[i]!=d){
            msg[j]=msg[i];
            j++;
        }
        i++;
    }
    msg[j] = '\0';

    printf("Formatted String:\n");
    puts(msg);
}

int main ()
{
    char message[100],del;

    printf("** String Parser **\n\n");

    printf("Enter a String:");
    gets(message);

    printf("Enter a Charachter to Filter:");
    scanf(" %c",&del);

    format_string(message,del);

    return 0;
}

