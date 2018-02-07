#include <stdio.h>
#define MIN_SIZE 1000 // MINIMUM array size

int main()
{
    int ar[MIN_SIZE]; // Declare an array of MIN_SIZE
    int in, N;

    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("\nEnter %d elements in the array : ", N);
    for(in=0; in<N; in++)
    {
        scanf("%d", &ar[in]);
    }


    /*
     * Print all elements of array
     */
    printf("\nElements in array are: ");
    for(in=0; in<N; in++)
    {
        printf("\n%d, ", ar[in]);
    }

    return 0;
}
