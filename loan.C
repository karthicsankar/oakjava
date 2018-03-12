#include <stdio.h>

int main(void) 
{

	int n,principal,rate,simple_interest;
	printf("Enter the principal ,rate and year:");
	scanf("%d %d %d",&principal,&n,&rate);
	simple_interest=(principal*n*rate)/100;
	printf("%d",simple_interest);
	return 0;
}
