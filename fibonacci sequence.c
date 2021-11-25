#include <stdio.h>
int main()
{
    int n,i,t1=0,t2=1,nextTerm=0;
    printf("Enter the positive number:");
    scanf("%d",&n);
    printf("fibonacci series:%d, %d, ",t1,t2);
    nextTerm=t1+t2;
    for(i=3;i<=n;i++)
    {
        printf("%d, ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;

}

