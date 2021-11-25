#include <stdio.h>
int main()
{
    int base,pow;
    double result=1.0;
    printf("Enter the base number:");
    scanf("%d",&base);
    printf("Enter the power:");
    scanf("%d",&pow);
    while(pow!=0)
    {
        result=result*base;                         //result=pow(base,pow);
        --pow;
    }
    printf("Answer: %.0lf",result);
    return 0;
}

