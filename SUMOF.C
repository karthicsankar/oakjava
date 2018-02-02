#include<stdio.h>
int main()
{
 int a,i,b=0;
 printf("enter the number");
 scanf("%d",&a);
 for(i=0;i<=a;i++)
 {
   b=b+i;
 }
 printf("\nsum is %d",b);
return 0;
}
