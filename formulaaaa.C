#include <stdio.h>

int main(void) 
{
    int a,b,c,result;
    printf("Enter the number:");
	scanf("%d %d %d",&a,&b,&c);
	result=(a*b)%c;
	printf("%d",result);
	return 0;
}
