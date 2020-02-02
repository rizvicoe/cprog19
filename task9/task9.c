/*
    Aim: WAP to calculate the resistance required (R) to be connected in series with the LED to protect it from blowing up when Voltage (V) is applied.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#define VLED 3.4

int main ()
{
    float voltage,resistance;

    printf("\t**** LED Resistor Calculator ****\n\n");

    printf("Enter the Input Voltage:");
    scanf("%f",&voltage);

    resistance = (voltage-VLED)/0.02;

    printf("Resistor = %.1f ohms\n",resistance);
    return 0;
}
