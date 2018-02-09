#include <stdio.h>

int main(void) 
{
	char st[30];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",st);
	for(i=0;st[i]!='\0';i++)
	{
		if(!((st[i]>='0' && st[i]<='9')||(st[i]>='a' && st[i]<='z')))
		{
			count=count+1;
		}
	}
	printf("\nthe number of special characters in the sentence is:%d",count);
	return 0;
}
