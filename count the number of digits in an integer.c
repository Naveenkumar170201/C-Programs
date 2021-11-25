#include <stdio.h>
int main()
{
    int count=0;
    long long int n;
    printf("Enter the integer:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    printf("Number of digits %d",count);
    return 0;
}
