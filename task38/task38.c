/*
    Aim: WAP to find area of a circle and a
         hexagon and also find which shape
         has a larger area using functions.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#include <math.h>
#define PI 3.142

float calc_area_circle(float radius){
    return PI*radius*radius;
}

float calc_area_hexagon(float side){
    return 3*sqrt(2)*side*side/2;
}

int main ()
{
    float radius,side,circle_area,hexagon_area;

    printf("** Area Calculator **\n\n");

    printf("Enter Radius of Circle:");
    scanf("%f",&radius);
    printf("Enter Side of Hexagon:");
    scanf("%f",&side);

    circle_area = calc_area_circle(radius);
    printf("Area of Circle: %.2f\n",circle_area);
    hexagon_area = calc_area_hexagon(side);
    printf("Area of Hexagon: %.2f\n",hexagon_area);

    if(circle_area>hexagon_area){
        printf("The Area of Circle is More than area of Hexagon");
    }else if(circle_area==hexagon_area){
        printf("The Area of Circle is equal to area Hexagon");
    }else{
        printf("The Area of Hexagon is More than area of Circle");
    }



    return 0;
}

