#include <stdio.h>

int main(void) 
{
	int number,flag=0,i,m;
	printf("Enter the number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
	
		if((number/i==2) && (number%i==0))
		{
			printf("%d",i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d",number);
	}
	return 0;
}
