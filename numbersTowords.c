/*numbers to words in numbers */
#include<stdio.h>
#include<conio.h>
int numberTowords(int number)
{
    int rem,i,num[5];
    if(10000<=number && number<100000)
    {
        for(i=0; i<5; i++)
        {
            rem=number%10;              //12345--ONE TWO THREE FOUR FIVE
            num[i]=rem;
            number/=10;
        }
        for(i=4; i>=0; i--)
        {
            if(num[i]==0)
                printf("ZERO ");
            else if(num[i]==1)
                printf("ONE ");
            else if(num[i]==2)
                printf("TWO ");
            else if(num[i]==3)
                printf("THREE ");
            else if(num[i]==4)
                printf("FOUR ");
            else if(num[i]==5)
                printf("FIVE ");
            else if(num[i]==6)
                printf("SIX ");
            else if(num[i]==7)
                printf("SEVEN ");
            else if(num[i]==8)
                printf("EIGHT ");
            else
                printf("NINE ");
        }
    }
    else
        printf("your input is not valid,so give valid input.");
    return 0;
}
int main()
{
    long number;
    printf("Enter the five digit number:");
    scanf("%ld",&number);
    numberTowords(number);
    return 0;
}





































