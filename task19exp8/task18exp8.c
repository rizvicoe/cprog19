/*
    Aim: WAP to find the body mass index of the user
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    float height,weight,bmi;

    printf("\t**** BMI Calculator ****\n\n");

    printf("Enter your Height (in meters) :");
    scanf("%f",&height);
    printf("Enter your Weight (in Kgs) :");
    scanf("%f",&weight);

    bmi = weight/height;
    printf("Your BMI is %f\n",bmi);

    if(bmi > 30){
        printf("Your are Obese");
    }else if(bmi > 25){
        printf("You are Overweight");
    }else if(bmi > 18.5){
        printf("You are Normal in Weight");
    }else{
        printf("You are Underweight");
    }

    return 0;
}

