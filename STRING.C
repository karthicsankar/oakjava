#include<stdio.h>
int main()
{
	int i,j,k,n;
	char a[1000000],b[10000000];
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<=n;i++)
	{
		if(a[i]==b[i])
		{
			printf("%c",a[i]);
		}
		else
		{
			printf("no prefix is commomn");
   
		}
	}
	return 0;
}
