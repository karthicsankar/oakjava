#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	int number,m,i;
	printf("Enter the number:");
	scanf("%s",a);
	scanf("%d",&number);
	m=strlen(a);
	for(i=number;i<m;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
