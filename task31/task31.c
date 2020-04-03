/*
    Aim: WAP to find the LCM and GCD of two given numbers using while loop.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int a,b,i=1,gcd,lcm;

    printf("**** LCM & GCD Finder ****\n\n\n");

    printf("Enter Two Numbers (a,b):");
    scanf("%d,%d",&a,&b);

    while(i<=a && i<=b){
        if(a%i==0 && b%i==0){
            gcd = i;
        }

        i++;
    }

    printf("The GCD(%d,%d) = %d\n",a,b,gcd);
    lcm = (a*b)/gcd;
    printf("The LCM(%d,%d) = %d\n",a,b,lcm);

    return 0;
}

