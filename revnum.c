#include<stdio.h>
void main()
{
int n, rev;
printf("Enter the number:");
scanf("%d",&rev);
while(n!=0)
{
rev= rev*10;
rev=rev+n%10;
n=n/10;
}
printf("reverce number is:%d", rev);
return 0;
}
