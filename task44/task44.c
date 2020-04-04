/*
    Aim: Write a program in C to find the second largest element in an array.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
void bubble_sort(int arr[], int n)
{
   int i, j, temp;
   for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++)  {
            if (arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }

   }
}

int find_second_largest(int arr[], int n){
   int i, second;
   second = arr[1];
   for (i = 0; i < n-1; i++) {
        if(arr[i]==second){
            second = arr[i+2];
        }else{
            break;
        }
   }

   return second;
}


int main ()
{
    int a[20],n,i;

    printf("** Second Largest Number Finder**\n\n");

    printf("Enter the Number of Elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter Number %d:",i);
        scanf("%d",&a[i]);
    }

    bubble_sort(a,n);

    printf("The Second Largest Number is %d",find_second_largest(a,n));


    return 0;
}



