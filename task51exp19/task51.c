/*
    Aim: Design a structure student_record to contain name,
         roll_number, and total marks obtained. Write a
         program to read 10 students data from the user
         and then display the first three toppers on the screen.
    Author: Prof. Shiburaj P.
    Class :
*/

#include <stdio.h>

struct student_record {
    char name[20];
    int roll_number;
    float total_marks;
};

void print_student(struct student_record s){
    printf("\tName: %s\n",s.name);
    printf("\tRoll Number: %d\n",s.roll_number);
    printf("\tMarks: %.2f\n\n",s.total_marks);
}

void sort_students(struct student_record s[]){
    int i,j;
    struct student_record temp;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(s[j].total_marks<s[j+1].total_marks){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

int main ()
{
    struct student_record student[10];
    int i;

    printf("** Topper Finder **\n\n");

    for(i=0;i<10;i++){
        printf("Enter Student %d Data:\n",i+1);
        printf("\tName:");
        scanf(" %[^\n]",student[i].name);
        printf("\tRoll No.:");
        scanf("%d",&student[i].roll_number);
        printf("\tTotal Marks:");
        scanf("%f",&student[i].total_marks);

    }
    sort_students(student);
    printf("First Topper:\n");
    print_student(student[0]);
    printf("Second Topper:\n");
    print_student(student[1]);
    printf("Third Topper:\n");
    print_student(student[2]);

    return 0;
}

