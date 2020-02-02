/*
    Aim: WAP to calculate the area of square.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{

    int side,area;

    printf("*** Sqaure Area Calculator ***\n\n\n");

    printf("Enter the Side of Square:");
    scanf("%d",&side);
    area = side*side;
    printf("Calculated Area of Square: %d",area);
    return 0;
}
