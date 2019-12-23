#include<stdio.h>
#include<conio.h>
void main()
{
char s[100],t[100];
int l;
clrscr();
printf("Enter a string:\n");
gets(s);
l=strlen(s);
printf("\nlength of string is %d\n",l);
strcpy(t,s);
puts(t);
strcat(s,t);
printf("string after concatinating
second string to first is %s",s);
if(strcmp(s,t)==0)

printf("\nBoth strings are same:");
else if(strcmp(s,t)<0)
printf("\nFirst string is smaller:");
else printf("\nsecond string is smaller:");

getch();


}
