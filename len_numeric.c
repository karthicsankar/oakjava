#include<stdio.h>
#include<conio.h>
int main();
{
 char st[50];
    int i,len = 0,count = 0;

    printf("enter any string:: ");
    scanf("%s",st);
    len = strlen(st);
    for(i=0;i<len;i++)
    {
            if(st[i] >= 48 && st[i] <= 57)    
            {
                  count++;
            }
    }
    printf("%d outoff %d numbers in a string",count,len);
    return 0;
}
