#include <stdio.h>
#define MAX_SIZE 1000 // Maximum array size

int main()
{
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int in, N;

    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("\nEnter %d elements in the array : ", N);
    for(in=0; in<N; in++)
    {
        scanf("%d", &arr[in]);
    }


    /*
     * Print all elements of array
     */
    printf("\nElements in array are: ");
    for(in=0; in<N; in++)
    {
        printf("\n%d, ", arr[in]);
    }

    return 0;
}
