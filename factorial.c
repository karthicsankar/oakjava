#include<stdio.h>
void main()
[
int i,n,fact=1;
printf("\n Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("\n Factorial is %d",fact");
getch();
}
