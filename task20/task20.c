/*
    Aim: WAP to find the roots of the quadratic equation
         with real roots using math library.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    float a,b,c,discriminant,x1,x2;

    printf("*** Quadratic Roots Finder ***\n\n\n");

    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);

    if(a==0){
        printf("Invalid Coefficients for a (a should not be zero).");
        return 0;
    }

    discriminant = b*b - 4*a*c;

    if(discriminant<0){
        printf("Roots are Imaginary.");
        return 0;
    }

    x1 = (-b + sqrt(discriminant))/(2*a);
    x2 = (-b - sqrt(discriminant))/(2*a);

    printf("The Roots of Quadratic Equation %.2fx^2 %+.2fx %+.2f = 0 are \n",a,b,c);
    printf("X1 = %f\n",x1);
    printf("X2 = %f",x2);

    return 0;
}

