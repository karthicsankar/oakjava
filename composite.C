#include <stdio.h>

int main(void) 
{

	int number,flag=0,i;
	scanf("%d",&number);
	if(number%2!=0 && number>3)     //logical operators
	{
		for(i=3;i<number;i++)
		{
			if(number%i==0)
			{
				flag=1;
				break;
				
			}
		}
	}
	if(flag==1)                     //checking for loop
	{
		printf(" Its is a composite number");
	}
	else
	printf("not a composite number");
	return 0;
}
