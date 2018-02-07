#include<stdio.h>
int main()
{
int ar[100],i,largest,size,j,temp;
printf("\n enter the size");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
largest=ar[0];
for(i=0;i<size;i++)
{
if(largest<ar[i])
{   largest=ar[i];
}
printf("%d",largest);
}
return  0;
}
