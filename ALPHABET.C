#include <stdio.h>
int main()
{
    char che;
    printf("Enter a letter:");
    scanf("%c",&che);
    if( (che>='a' && che<='z') || (che>='A' && che<='Z'))
        printf("%c is alphabet",che);
    else
        printf("%c is not alphabet",che);
        return 0;
}
