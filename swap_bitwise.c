#include<stdio.h>           //bitwise operators
int main()
{
    int nn1,nn2;
    scanf("%d %d",&nn1,&nn2);
    nn1=nn1^nn2;                                  // nn1=nn1+nn2;
    nn2=nn1^nn2;                                   // nn2=nn1-nn2;
    nn1=nn1^nn2;                                    // nn1=nn1-nn2;
    printf("%d %d",nn1,nn2);
    return 0;
}
