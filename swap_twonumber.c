#include <stdio.h>
 
int main(void) 
{
int a,y;
printf("\n enter two numbers to swap:");
scanf("%d %d",&a,&y);
printf("\n before swapping:");
printf("\nx=%d",a);
printf("\ny=%d",y);
a=a+y;
y=a-y;
a=a-y;
printf("\n after swapping:");
printf("\ta=%d",a);
printf("\ny=%d",y);
return 0;
}
