#include<stdio.h>
int main()
{
  int mn1,hrs1,min1;
  printf("enter the minutes");
    scanf("%d",&mn1);
  hrs1=mn1/60;
  min1=mn1%60;
  printf("%d:%d",hrs1,min1);
  return 0;
}
