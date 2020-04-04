/*
    Aim: Write a program in C to print the elements
        of an array in reverse order using pointers.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

void print_array(int arr[], int n){
    int i;
    printf("\t[");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf(" ]\n");
}

int main ()
{
    int a[20],n,*pa,i;

    printf("** Reverser **\n");
    pa = a;
    printf("Enter the Number of Elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter Element %d:",i);
        scanf("%d",&a[i]);
    }

    printf("Original Array:\n");
    print_array(a,n);

    printf("Reversed Array:\n");
    printf("\t[");
    for(i=0;i<n;i++){
        printf(" %d",*(pa+(n-1-i)));
        if(i!=n-1){
            printf(",");
        }
    }
    printf(" ]\n");


    return 0;
}

