
#include<stdio.h>
int main()
{
 int a, high, i, temp1, temp2, remainder, result,n = 0;
 printf("Enter two numbers(intervals): ");
   scanf("%d %d", &a, &high);
   printf("\nArmstrong numbers between %d an %d are: ", a, high);
   for(i = a + 1; i < high; ++i)
    {
       temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += (remainder, n);
            temp2 /= 10;
        }
        if (result == i) 
        {
            printf("\t%d ", i);
        }
        n=0;
        result=0;
        }
        return 0;
        }
