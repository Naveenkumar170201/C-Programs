
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the first number:");
    scanf("%d",&a);                                                 //without temp a=a-b   b=a+b  a=b-a
    printf("Enter the second number:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swaping of num1:%d\n",a);
    printf("After swaping of num2:%d",b);
    return 0;
}

