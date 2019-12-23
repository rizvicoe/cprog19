#include <stdio.h>
int addNumbers(int n);
int main()
{
int num;
printf("Enter a positive integer: ");
scanf("%d", &num);
printf("Sum = %d",addNumbers(num));
return 0;
}
int addNumbers(int n)
{
if(n != 0)
return n + addNumbers(n-1);
else
return n;
}
Example-2
#include <stdio.h>
int main()
{
int c, n, fact = 1;

printf("Enter a number to calculate its factorial\n"); scanf("%d", &n);
for (c = 1; c <= n; c++)
fact = fact * c;
printf("Factorial of %d = %d\n", n, fact);
return 0;}
