#include <stdio.h>
#define MAX_SIZE 100
int main()
{
int ar[MAX_SIZE];
int i, n, sum=0;
printf("Enter size of the array: ");
scanf("%d", &n);
printf("\nEnter elements in the array: ");
for(i=0; i<n; i++)
{
scanf("%d", &arr[i]);
sum += ar[i];
}
printf("\nSum of all elements of array = %d", sum);
return 0;
}
