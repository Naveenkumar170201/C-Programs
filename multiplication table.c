#include <stdio.h>
int main()
{
    int n,i,limit;
    printf("Enter the multiplicant:");
    scanf("%d",&n);
    printf("Enter the limit of multiplication table:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
        printf("%d*%d=%d\n",i,n,i*n);
    return 0;

}

