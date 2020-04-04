/*
    Aim: Write a program to print pascal triangle using recursion function.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
int calc_factorial(int num){
    if(num<=0){
        return 1;
    }
    return num*calc_factorial(num-1);
}

int main ()
{
    int rows,i,j,pt;

    printf("** Pascal triangle **\n\n");

    printf("Enter the Number of Rows:");
    scanf("%d",&rows);

    for(i=0;i<rows;i++){
        for(j=0;j<=rows-i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            pt = calc_factorial(i)/(calc_factorial(j)*calc_factorial(i-j));
            printf(" %d",pt);
        }
        printf("\n");
    }


    return 0;
}



