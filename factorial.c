#include<stdio.h>
void main()
{
int i,n;
unsigned long long factorial=1;
printf("Enter the integer:");
scanf("%d",&n);
if(n<0)
printf("Error");
else
{
for(i=0;i<=n;i++)
{
factorial*=1;
}printf("Factorial of %d=%llu",n,factorial);
}
return o;
}
