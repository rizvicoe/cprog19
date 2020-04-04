/*
    Aim: Write a program in C to sort elements of
         the array in ascending order.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
void bubble_sort(int arr[], int n)
{
   int i, j, temp;
   for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++)  {
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }

   }
}

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
    int a[30],n,i;

    printf("** Array Sorter **\n\n");

    printf("Enter the Number of Elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter Number %d:",i);
        scanf("%d",&a[i]);
    }

    printf("Original Array:\n");
    print_array(a,n);
    bubble_sort(a,n);
    printf("Sorted Array:\n");
    print_array(a,n);

    return 0;
}



