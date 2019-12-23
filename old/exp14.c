#include<stdio.h>
#include<conio.h>
void main()
{
int a[10], n, i, key,found=0,temp,j;
clrscr();
printf("How many numbers:");
scanf("%d",&n);
if(n>30)
{
printf("too many numbers");
exit(0);
}
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter key to be search:");
scanf("%d",&key);
for(i=0;i<n;i++)
if(a[i]==key)
{
printf("Found:at %d position",i+1);
found=1;
}
if(found==0)
printf("number not found:");
getch();
}

