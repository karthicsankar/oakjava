#include <stdio.h>

int main()
{
	int num,i,a[i];
  printf("enter the array element");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		printf("\n%d\t %d",a[i],i);
	}
	return 0;
}
