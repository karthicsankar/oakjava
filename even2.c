
#include <stdio.h>
int main()
{
	 int a,b,i;
	printf("\nEnter  intial number to find even  num :");
	scanf("%d",&a);
	printf("\nEnter final number to find even num :");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		if(i%2!=1)
		printf("%d\t",i);
	}
	return 0;
  }
