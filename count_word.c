#include<stdio.h>
int main()
{
  int in ,count=0;
  char a[100];
  scanf("%[\n]s",a);
  for(in=0;a[in]!=NULL;in++)
  {
  	if(a[in]==' ')
  	{
  		count++;
  	}
  	
  }
  printf("%d",count+1);
  return 0;
}
