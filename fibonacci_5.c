#include <stdio.h>
 
void main()
{
    int  a = 0, b = 1, c, limit, count = 0;
 
    printf("Enter the limit to generate the Fibonacci Series \n");
    scanf("%d", &limit);
    printf("Fibonacci Series is ...\n");
    printf("%d\n", a);
    printf("%d\n", b);
    count = 2;
    while (count < limit)
    {
        c = a + b;
        count++;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}
