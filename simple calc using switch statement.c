#include <stdio.h>
int main()
{
    char operator;
    int num1,num2,result;
    printf("Choose this operators (+ - * /).");
    scanf("%c",&operator);
    printf("Enter the two number:");
    scanf("%d %d",&num1,&num2);
    switch (operator)
    {
        case '+':{
            result=num1+num2;
            printf("%d + %d = %d ",num1,num2,result);
            break;
            }
        case '-':{
            result=num1-num2;
            printf("%d - %d = %d",num1,num2,result);
            break;
            }
        case '*':{
            result=num1*num2;
            printf("%d * %d = %d",num1,num2,result);
            break;
        }
        case '/':{
            result=num1/num2;
            printf("%d / %d = %d",num1,num2,result);
            break;
        }
        default:{
            printf("you enter wrong operator");
            break;
        }
    }

    return 0;
}
