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

    bmi = weight/(height*height);
    printf("Your BMI is %.1f\n",bmi);

    if(bmi > 40){
        printf("Your are Obese Class III");
    }else if(bmi > 35){
        printf("You are Obese Class II");
    }else if(bmi > 30){
        printf("You are Obese Class I");
    }else if(bmi > 25){
        printf("You are Overweight");
    }else if(bmi > 18.5){
        printf("You are Normal");
    }else if(bmi > 17){
        printf("You are Mild Thinness");
    }else{
        printf("You are Severe Thinness");
    }

    return 0;
}

