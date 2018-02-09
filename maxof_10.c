#include <stdio.h>

int main() {
	int in,temp;
	
	int a[10];
	for(in=0;in<10;ni++)
	{
		scanf("%d",&a[in]);
	}
	for(in=0;in<10;in++)
	{
		
		
			if(a[in]>a[in+1])
			{
				temp=a[in];
				a[in]=a[in+1];
				a[in+1]=temp;
			}

	}
	printf("%d",a[in]);
	return 0;
}
