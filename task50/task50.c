/*
    Aim: Design a structure data type called time_struct
         containing three members integer hour, integer
         minute and integer second. Develop a program
         that would assign values to the individual
         members and start running the clock and display
         time in HH:MM:SS format.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>
#include <windows.h>

struct time_struct {
    int hour;
    int minute;
    int second;
};

int main ()
{
    struct time_struct my_time = { 5,5,5 };

    printf("** Clock **\n\n");
    printf("Enter Time in HH:MM:SS Format:");
    scanf("%d:%d:%d",&my_time.hour,&my_time.minute,&my_time.second);
    printf("\n\n");
    while(1){
        printf("\t%02d:%02d:%02d\r",my_time.hour,my_time.minute,my_time.second);
        Sleep(1000);
        my_time.second++;
        if(my_time.second>=60){
            my_time.second = 1;
            my_time.minute++;
        }
        if(my_time.minute>=60){
            my_time.minute = 0;
            my_time.hour++;
        }
        if(my_time.hour>=24){
            my_time.hour = 0;
            my_time.minute = 0;
            my_time.second = 0;
        }
    }

    return 0;
}

