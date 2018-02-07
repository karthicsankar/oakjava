#include <stdio.h>
#include <math.h>

int main()
{
     int first, diff, num, i, tn;
     int sum = 0;

     printf("Enter the first term value of the A.P. series: ");
     scanf("%d", &first);
     printf("\nEnter the total numbers in the A.P. series: ");
     scanf("%d", &num);
     printf("\nEnter the common difference of A.P. series: ");
     scanf("%d", &diff);
     sum = (num * (2 * first + (num - 1)* diff ))/ 2;
     tn = first + (num - 1) * diff;
     printf("\nSum of the A.P series is: ");
     for (i = first; i <= tn; i = i + diff )
     {
          if (i != tn)
               printf("\n%d + ", i);
          else
               printf("\n%d = %d ", i, sum);
     }
     return 0;
}
