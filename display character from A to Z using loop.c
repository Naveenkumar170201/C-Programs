#include <stdio.h>
int main()
{
    char ch;
    printf("Enter U to display the uppercase alphabet.\n");
    printf("Enter l to display the lowercase alphabet.\n");
    scanf("%c",&ch);
    if(ch=='U' || ch=='u')
    {
        for(ch='A';ch<='Z';ch++)
            printf("%c ", ch);
    }
    else if(ch=='L' || ch=='l')
        {
         for(ch='a';ch<='z';ch++)
            printf("%c ", ch);
        }
    else
    {
        printf("Error!you enter an invalid character.");
    }
    return 0;
}


