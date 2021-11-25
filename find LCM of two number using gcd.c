#include <stdio.h>
int lcmCalc(int n1,int n2)
{
    int i,gcd,lcm;
    for(i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
           gcd=i;
        }
    }
        return lcm=(n1*n2)/gcd;
}
int main()
{
    int num1,num2,lcm;
    printf("Enter the two numbers:");
    scanf("%d %d",&num1,&num2);
    lcm=lcmCalc(num1,num2);
    printf("GCD of %d and %d is %d",num1,num2,lcm);
    return 0;

}

