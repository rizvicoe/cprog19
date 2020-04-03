/*
    Aim:Write a C program to find Strong Numbers within
        a range of numbers using do while loop.
    Author: Shiburaj
*/
#include<stdio.h>

int main(){
    int start,end,num,last_d,rem_d,fact=1,sum=0;

    printf("** Strong Number Finder **\n\n");

    printf("Enter the start and end numbers (a,b):");
    scanf("%d,%d",&start,&end);
    num = start;
    do{
        sum = 0;
        rem_d = num;
        do{
            last_d = rem_d%10;
            rem_d = rem_d/10;
            fact = 1;
            do {
                if(last_d==0){
                    break;
                }
                fact = fact * last_d;
                last_d--;
            }while(last_d!=0);

            sum = sum + fact;
        }while(rem_d!=0);

        if(num == sum){
            printf("%d ",num);
        }
        num++;
    }while(num<=end);

    return 0;
}
