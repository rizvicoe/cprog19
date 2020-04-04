/*
    Aim: WAP to find the permutation and combination
         of a given n and r with the help of pointers.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
int factorial(int a){
    int i,fact=1;
    for(i=a;i>0;i--){
        fact *= i;
    }
    return fact;
}

int calc_permutation(int *x,int *y){
    return factorial(*x)/factorial(*x-*y);
}

int calc_combination(int *x,int *y){
    return factorial(*x)/(factorial(*y)*factorial(*x-*y));
}

int main ()
{
    int n,r,permutation,combination;

    printf("** Permutation and Combination Finder**\n\n");

    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);

    permutation = calc_permutation(&n,&r);
    combination = calc_combination(&n,&r);

    printf("Permutation of P(%d,%d) = %d\n",n,r,permutation);
    printf("Combination of C(%d,%d) = %d",n,r,combination);

    return 0;
}


