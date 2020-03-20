/*
    Aim: WAP to read weekday number and print weekday name using switch.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int day;

    printf("*** Day Name Finder ***\n\n\n");

    printf("Enter Day Number:");
    scanf("%d",&day);

    switch(day){
        case 0:
            printf("Monday");
            break;
        case 1:
            printf("Tuesday");
            break;
        case 2:
            printf("Wednesday");
            break;
        case 3:
            printf("Thursday");
            break;
        case 4:
            printf("Friday");
            break;
        case 5:
            printf("Saturday");
            break;
        case 6:
            printf("Sunday");
            break;
        default:
            printf("Invalid Number");
    }

    return 0;
}

