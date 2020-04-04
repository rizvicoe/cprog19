/*
    Aim: Write a program in C to add two numbers using pointers
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int a,b,c;
    int *pa,*pb,*pc;

    pa = &a;
    pb = &b;
    pc = &c;

    printf("** Adder **\n\n");

    printf("Enter Value of A:");
    scanf("%d",&a);

    printf("Enter Value of B:");
    scanf("%d",&b);

    *pc = *pa + *pb;

    printf("Sum of %d and %d is %d.",a,b,c);

    return 0;
}

