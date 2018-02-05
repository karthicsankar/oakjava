#include<stdio.h>
int main()
{
int i,num,n=1;
printf("\n enter the number");
scanf("%d",&num);
for(i=1;i<=5;i++)
{
n=num*i;

printf("\t%d\t ",n);
}
return 0;
}
