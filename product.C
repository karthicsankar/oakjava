#include <stdio.h>
int main(void) 
{
	int number,a,product=1;
	printf("Enter a number:");
	scanf("%d",&number);
	while(number!=0)
	{
		a=number%10;
		product=product*a;
		number=number/10;
	}
	printf("%d",product);
	return 0;
}
