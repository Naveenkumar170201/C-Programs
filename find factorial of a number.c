#include <stdio.h>
int main()
{
    int n,i;
    unsigned long long fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
       printf("Error!factorial doesn't exit negative number.");
    }
    else
    {
        for(i=1;i<=n;i++)
        fact=fact*i;
        printf("factorial of %d=%d",n,fact);

    }
    return 0;

}

