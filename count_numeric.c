#include <stdio.h>
#include<string.h>
int main()
{
   char sd[100];
   int l,count=0,c,i;
   scanf("%s",sd);
   l=strlen(sd);
   
   for(i=0;i<l;i++)
   {
       if(sd[i]>='0' && sd[i]<='9')
       {
       count++;
       flag=1;
       }
       else
       flag=0;
   }
   if(flag==1)
      printf("%d",count);
   else
      printf("0");

    return 0;
}
