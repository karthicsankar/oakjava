#include<stdio.h>
int main()
{
    int ar[MAXSIZE];
    int i, j, n, t;
    printf("Enter the value of num \n");
    scanf("%d", &n);
    printf("Enter the elements one by one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }
    /*   Bubble sorting begins */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (ar[j] > ar[j + 1])
            {
                t = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = t;            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}
