/*
    Aim: WAP to read three integer values from the keyboard
         and displays the output stating that they are
         sides of right angled triangle or not.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

int main ()
{
    int a,b,c,greatest,side1,side2;

    printf("*** Triangulator ***\n\n\n");

    printf("Enter the sides (a,b,c):");
    scanf("%d,%d,%d",&a,&b,&c);

    if(a<=0 || b<=0 || c<=0){
        printf("Invalid Sides of a Triangle.");
    }

    if(a>b){
        if(a>c){
            greatest = a; side1 = b; side2 = c;
        }else{
            greatest = c; side1 = a; side2 = b;
        }
    }else{
        if(b>c){
            greatest = b; side1 = a; side2 = c;
        }else{
            greatest = c; side1 = a; side2 = b;
        }
    }

    if(greatest*greatest == (side1*side1 + side2*side2)){
        printf("The Entered sides make a Triangle.");
    }else{
        printf("The Entered sides Doesnot make a Triangle.");
    }


    return 0;
}

