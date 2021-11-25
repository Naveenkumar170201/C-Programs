/*give a list of string and numbers,
 rotate the string by one position to the right
if the sum of square of digits of the corresponding number is
even and rotate it twice to the left
if the sum of square of digits of the corresponding number is odd*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int sum_square_digit(int num){
    int rem,sum=0;
    while(0<num){
        rem=num%10;
        sum+=(rem*rem);
        num/=10;
    }
    return sum;
}
void rightRotate(char str[]){
    char last[1];
    int len=strlen(str);                // science-->escienc
    last[0]=str[len-1];
    for(int i=len-1;i>0;i--)
        str[i]=str[i-1];
    str[0]=last[0];
    printf("%s",str);
}
void leftRotate(char str[]){
    char first[2];                      //science-->iencesc
    int len=strlen(str);
    first[0]=str[0];
    first[1]=str[1];
    for(int i=0;i<len;i++)
        str[i]=str[i+2];
    str[len-2]=first[0];
    str[len-1]=first[1];
    printf("%s",str);
}
int main(){
    char str[30];
    int number,result,l;
    printf("Enter the string:");
    gets(str);
    printf("Enter the number:");
    scanf("%d",&number);
    result=sum_square_digit(number);
    if(result%2==0)
        rightRotate(str);   //sum of sqrt of digit is even number
    else
        leftRotate(str);    //sum of sqrt of digit is odd number
    return 0;
}
