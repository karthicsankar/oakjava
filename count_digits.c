#include <stdio.h>

int main(void) {
	int a,b=0;
	printf("enter a value");
	scanf("%d",&a);
	if(a>0)
	{
		b=b+1;
	}
	if(a>9)
	{
		b=b+1;
	}
	if(a>99)
	{
		b=b+1;
	}
	if(a>999)
	{
		b=b+1;
	}
	if(a>9999)
	{
		b=b+1;
	}
	if(a>99999)
	{
		b=b+1;
	}
	if(a>999999)
	{
		b=b+1;
	}
	
	
	
	printf("\nthe digits is  %d,%d",a,b);
	// your code goes here
	return 0;
}
