#include <stdio.h>
int main()
{
    int n,cube=0,rem,temp;
    printf("Enter the three digit number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        cube=cube+(rem*rem*rem);            //cube+=rem*rem*rem
        n=n/10;                             //n/=10
    }
    if(temp==cube)
    {
        printf("%d is a armstrong number",temp);
    }
    else
    {
        printf("%d is not a armstrong number",temp);
    }
    return 0;
}

