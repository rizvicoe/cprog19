/*
    Aim: To find area and perimeter of the circle
    Author: Prof. Shiburaj P.
    Class : FE Div C
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int radius;
    float area, perimeter;
    system("cls");

    printf("\t**** Circle Area Calculator ****\n\n");

    printf("Enter radius of circle:");
    scanf("%d",&radius);

    perimeter = 2 * 3.14 * radius; 
    area = 3.14 * radius * radius;

    printf("Perimeter of the Circle = %f\n",perimeter);
    printf("Area of the Circle = %f\n",area);



    system("pause");
    return 0;
}
