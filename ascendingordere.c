#include <stdio.h>

int main(void) {
	int number,a[10],i;
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
