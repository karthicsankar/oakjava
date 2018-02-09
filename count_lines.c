#include <stdio.h>

int main()
{
char sd[100];
   int l,count=1,i;
   scanf("%c",sd);
   l=strlen(sd);
   for(i=0;i<l;i++)
   {
       if(sd[i]=='.')
       count++;
       printf("%d",count);
       else
       printf("%d",count);
   }
