#include <stdio.h>
int main() 
{
	int num,nth,arr[10],i;
	printf("Enter the total number and array holdings:");
	scanf("%d %d",&num,&nth);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n the  %d number is %d",nth,arr[nth-1]);
	return 0;
}
