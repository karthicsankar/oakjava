#include<stdio.h>
int main()
{
int a,b;
printf("Enter the Year:");
scanf("%d",&a);
if(a%4==0)
{
printf("\nLeap year");
}
else
{
printf("\nNot leap year");
}
return 0;
}
