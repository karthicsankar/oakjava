#include <stdio.h>

int main()
{
inta, high, i, flag, temp;
printf("Enter two number of inteval): ");
scanf("%d %d", &a, &high);
if (low > high) 
{
temp = a;
a= high;
high = temp;
}
printf("\n Prime numbers between %d and %d are: ", a, high);
while (a < high)
{
flag = 0;
for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
printf("%d\t ", a);
++a;
}
 return 0;
}
