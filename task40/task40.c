/*
    Aim: Write a program in C to Print Fibonacci Series using recursion
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
void print_fibonacci(int a,int b,int n){
    int sum;
    if(n<=0){
        return;
    }
    sum = a+b;
    n--;
    printf("%d ",sum);
    print_fibonacci(b,sum,n);
}

int main ()
{
    int n,a=0,b=1;

    printf("** Fibonacci Series Printer **\n\n");

    printf("Enter the Number of Terms:");
    scanf("%d",&n);
    printf("0 1 ");
    n = n-2;
    print_fibonacci(a,b,n);

    return 0;
}



