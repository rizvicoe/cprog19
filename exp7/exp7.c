/*
    Aim: To find total , percentage and grade of the entered marks
        Greater than 90 % = A Grade
        Greater than 80 % = B Grade
        Greater than 70 % = C Grade
        less than or equal to 70 % = D Grade

    Author: Prof. Shiburaj P.
    Class : FE Div C
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int count,marks[10],sum=0,i,out_off;
    float percentage;
    system("cls");

    printf("\t**** Grade Calculator ****\n\n");

    // Get user input
    printf("Enter Number of Subjects (1 to 10):");
    scanf("%d",&count);
    printf("Enter Out off Marks (eg. 100):");
    scanf("%d",&out_off);
    printf("\n\n");
    for(i=0;i<count;i++){
        printf("Enter Subject %d Marks:",i+1);
        scanf("%d",&marks[i]);
        sum += marks[i];
    }

    // Calculating percentage
    percentage = (sum * 100) / (count * out_off * 1.0);

    // Printing
    printf("Grand Total: %d\n", sum);
    printf("Percentage: %f\n", percentage);

    // Checking Grade
    if(percentage > 90){
        printf("Grade: A");
    }else if(percentage > 80){
        printf("Grade: B");
    }else if(percentage > 70){
        printf("Grade: C");
    }else{
        printf("Grade: D");
    }

    printf("\n\n");
    system("pause");
    return 0;
}

