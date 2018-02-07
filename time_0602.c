#include<stdio.h>
int main()
{
  int mn1,hrs1,mn2,hrs2,hrs3,mn3;
  scanf("%d %d %d %d",&hrs1,&mn1,&hrs2,&mn2);
   mn3=mn1-mn2;
   mn3=mn3%60;
 hrs3=(hrs1-hrs2)+(mn3/60);
  printf("%d:%d",hrs3,mn3);
  return 0;
}
