#include <stdio.h>

int main(void)
{
	int number,temp,rev=0;
	printf("Enter the number:");
	scanf("%d",&number);
	while(number!=0)
	{
	temp=number%10;
	rev=rev*10+temp;
	number=number/10;
	}
	printf("\nThe reverse number is %d",rev);
	return 0;
}
