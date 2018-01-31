include<stdio.h>
int main()
{
int num,tenth,ones;         /*variable declaration*/
printf("Enter a number");    /*output satement*/
scanf("%d",&num);
tenth=num/10;
ones=num-(tenth*10);
printf("\nthe square is %d",((tenth*tenth)+(ones*ones)));
return 0;
}
