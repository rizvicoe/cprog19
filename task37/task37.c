/*
    Aim: Write a program in C to print all the prime
         numbers between two numbers entered by the
         user using functions.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
int check_prime(int num){
    /* If its a prime then return 1 else return 0 */
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }

    return 1;

}

int main ()
{
    int start,end,i;

    printf("** Prime Number Finder **\n\n");

    printf("Enter Start:");
    scanf("%d",&start);
    printf("Enter End:");
    scanf("%d",&end);

    printf("Following are the prime Numbers:\n");
    for(i=start;i<=end;i++){
        if(check_prime(i)){
            printf("%d,",i);
        }
    }

    return 0;
}

