#include <stdio.h>
int main()
{
int a, b;
long long power = 1;
int i;
printf("Enter base: ");
scanf("%d", &a);
printf("Enter exponent: "); 
scanf("%d", &b);
for(i=1; i<=b; i++)
{
power = power * a;
}
printf("%d ^ %d = %lld", a, b, power);
return 0;
}
