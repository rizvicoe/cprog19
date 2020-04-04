/*
    Aim: Write a program in C to calculate determinant of a 3 x 3 matrix.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#include <stdlib.h>

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
    int a[10][10],determinant=0;

    printf("** Determinant Calculator **\n\n");

    printf("Enter Elements of The 3x3 Array:\n");
    read_array(a,3,3);

    determinant = a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])
                  - a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])
                  + a[0][2]*(a[1][0]*a[1][2]-a[2][0]*a[1][1]);

    determinant = abs(determinant);

    printf("\nDeterminant:%d\n",determinant);

    return 0;
}

