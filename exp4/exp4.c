/*
    Aim: To find area and perimeter of the circle
    Author: Prof. Shiburaj P.
    Class : FE Div C
*/

#include <stdio.h>
#define PI 3.14

int main ()
{
    int radius;
    float area, perimeter;

    printf("\t**** Circle Area Calculator ****\n\n");

    printf("Enter radius of circle:");
    scanf("%d",&radius);

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Perimeter of the Circle = %.2f\n",perimeter);
    printf("Area of the Circle = %.2f\n",area);

    return 0;
}
