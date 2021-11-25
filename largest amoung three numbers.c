#include <stdio.h>
int main()
{
    double a,b,c;
    printf("Enter three different number:");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>b&&a>c)
    printf("%.2lf is largest number",a);
    else if(b>c)
    printf("%.2lf is largest number",b);
    else
    printf("%.2lf is largest number",c);
    return 0;
}
