#include <stdio.h>
int main()
{
    double num;
    printf("Enter the number:");
    scanf("%lf",&num);
    if(num>0.0)
        printf("you entered a positive number");
    else if(num<0.0)
        printf("you entered a negative number");
    else
        printf("you entered zero");
    return 0;
}



