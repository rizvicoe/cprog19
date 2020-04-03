/*
    Aim: Write a program in C to convert a
         decimal number into binary using while loop.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int dec,rem,bin=0,i=0;

    printf("*** Decimal to Binary Converter ***\n\n\n");

    printf("Enter the Decimal Number:");
    scanf("%d",&dec);

    printf("Binary of %d",dec);
    while(dec!=0){
        rem = dec%2;
        bin = bin + rem * (int)(pow(10,i)+0.5);
        dec = dec/2;
        i++;
    }

    printf(" = %d",bin);

    return 0;
}

