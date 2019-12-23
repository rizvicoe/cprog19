#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum =0,l,s,list[100];
float avg;
clrscr();
/* Reading the array value */
printf("Total value in the array\n");
scanf("%d",&n);
printf("Enter %d value \n",n);
for(i=0;i<n;i++)
scanf("%d",&list[i]);
s=l=sum= list[0]; /* Take first value of array and assign into sum,l,s*/
/* Compare and sum */

for(i=1;i<n;i++)
{
if(list[i]>l)  l=list[i];
if(list[i]<s) s=list[i];

sum+=list[i];
}
/* Print result */
avg=sum/(float)n;
printf("Data list is:\n");
for(i=0;i<n;i++)
printf("%5d",list[i]);
printf("\n\n");
printf("Largest Value	= %d\n",l);
printf("Smallest Value	= %d\n",s);
printf("Sum of all data = %d\n",sum);
printf("Average	= %f\n",avg);
getch();
}
