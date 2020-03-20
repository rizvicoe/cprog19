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
        printf("Roots are Imaginary.\n");
        printf("X1 = %.2f %+.2f i\n",-b/(2*a),sqrt(-1*discriminant)/(2*a));
        printf("X2 = %.2f %+.2f i",-b/(2*a),-1*sqrt(-1*discriminant)/(2*a));
    }else if(discriminant == 0){
        printf("Roots are Real and Equal.\n");
        printf("X1 = X2 = %.2f\n",-b/(2*a));
    }else{
        x1 = (-b + sqrt(discriminant))/(2*a);
        x2 = (-b - sqrt(discriminant))/(2*a);
        printf("X1 = %.2f\n",x1);
        printf("X2 = %.2f",x2);
    }



    return 0;
}

