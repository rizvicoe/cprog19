#include<stdio.h>
#include<conio.h>
#define p 3.14
int test;
void main ()

{ float r, area; clrscr();

printf("Enter the radius of a circle:"); scanf("%f",&r);

area=p *r*r;

printf("The area is equal:%f",area); getch();
