#include <stdio.h>
int main()
{
    int a,b,quotient,rem;
    printf("Enter dividend:");
    scanf("%d",&a);
    printf("Enter divisor:");
    scanf("%d",&b);
    quotient=a/b;
    rem=a%b;
    printf("quotient value is %d\n",quotient);
    printf("remainder value is %d",rem);
    return 0;
}
