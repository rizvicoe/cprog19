/*
    Aim: WAP to binary number to decimal number.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int dec=0,bin,i=0,rem;

    printf("*** Binary to Decimal Converter ***\n\n\n");

    printf("Enter the Binary Number:");
    scanf("%d",&bin);

    printf("Binary of %d",bin);
    while(bin!=0){
        rem = bin%10;
        dec = dec + rem * (int)(pow(2,i)+0.5);
        bin = bin/10;
        i++;
    }

    printf(" = %d",dec);



    return 0;
}

