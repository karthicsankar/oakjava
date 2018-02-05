#include<stdio.h>
int main()
{
int a=0,num,n,digit,i;
printf("Enter the number:");
scanf("%d",&num);
  n=num;
while(n!=0)
{
digit=n%10;
a=a+(digit*digit*digit);
n=n/10;
}
if(a==num)
{
  printf("\nyes it is not a armstrong number");
}
  else
  {
    printf("\nno it is not a armstrong number");
  }
return 0;
}
