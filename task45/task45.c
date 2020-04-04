/*
    Aim: Write a program in C for multiplication of two square Matrices.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
void print_array(int arr[10][10],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}

void read_array(int arr[10][10],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("(%d,%d):",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}


int main ()
{
    int a[10][10],b[10][10],mul[10][10],a_m,a_n,b_m,b_n,i,j,k;

    printf("** Matrix Multiplication **\n\n");

    printf("Enter Size of First Matrix (m,n):");
    scanf("%d,%d",&a_m,&a_n);
    printf("Enter Size of Second Matrix (m,n):");
    scanf("%d,%d",&b_m,&b_n);

    if(a_n != b_m){
        printf("Multiplication of this Matrix Not Possible.");
        return 0;
    }

    printf("Enter Elements of First Array:\n");
    read_array(a,a_m,a_n);
    printf("Enter Elements of Second Array:\n");
    read_array(b,b_m,b_n);

    for(i=0;i<a_m;i++){
        for(j=0;j<b_n;j++){
            mul[i][j] = 0;
            for(k=0;k<a_n;k++){
                mul[i][j] += a[i][k] * b[k][j];
            }

        }
    }

    printf("\nFirst Array:\n");
    print_array(a,a_m,a_n);
    printf("\nSecond Array:\n");
    print_array(b,b_m,b_n);
    printf("\nResult after Multiplication:\n");
    print_array(mul,a_m,b_n);

    return 0;
}



