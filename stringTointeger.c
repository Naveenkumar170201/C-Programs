#include<stdio.h>
#include<conio.h>
#include<string.h>
int stringTointeger(char str[])
{
    int number=0,i;
    i=0;
    while(str[i]!='\0')
    {
        if((str[i]<48)||(str[i]>57))
            return 0;
        else
        {
            number=number*10+(str[i]-48);
            i++;
        }
    }
    return number;
}
int main()
{
    char str[20];
    int result;
    printf("Enter the values:");
    scanf("%s",str);
    result=stringTointeger(str);
    if(result!=0)
        printf("Equivalent integer value is %d",result);
    else
        printf("Can't convert this string.\n");

    return 0;
}
