/*
    Aim: WAP to find the height of the building when the user
         enters the distance from the building and the angle
         of elevation in degrees.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main ()
{
    float distance,angle,height;
    printf("*** Height Calculator ***\n\n\n");

    printf("Please Enter Distance (meters):");
    scanf("%f",&distance);
    printf("Enter Elevation Angle (degrees) :");
    scanf("%f",&angle);

    angle = angle*PI/180;

    height = distance * tan(angle);

    printf("Height of Building: %.2f meters",height);

    return 0;
}

