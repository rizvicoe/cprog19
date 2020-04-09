/*
    Aim: Write a program in C to sort elements of the array
         in aescending order.
    Author: Shiburaj
*/
#include<stdio.h>
void bubbleSort(int arr[], int n)
{
   int i, j, temp;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
           }

}

void print_arr
ay(int arr[], int n){
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
    int arr[5] = {5,4,3,2,1};
    int i, j, temp,n=5;
       for (i = 0; i < n-1; i++)
           for (j = 0; j < n-i-1; j++)
               if (arr[j] > arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
               }
    print_array(arr,5);

    return 0;
}

