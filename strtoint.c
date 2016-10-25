#include<stdio.h>
#include<stdlib>
int main()
{
char  inputStr[30];
printf("Enter the string");
gets(inputStr);
printf("integer %d\n",atoi(inputStr));
return 0;
}
