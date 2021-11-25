#include <stdio.h>
int main()
{
    double a,b,mul;
    printf("Enter two floating values a & b:");
    scanf("%lf %lf",&a,&b);
    mul=a*b;
    printf("multiply of two floating values %.2lf * %.2lf = %.2lf",a,b,mul);
    return 0;
}
