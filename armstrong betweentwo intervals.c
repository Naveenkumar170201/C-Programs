#include <stdio.h>
#include <math.h>
int main()
{
    int n1,n2,result=0,rem,temp;
    printf("Enter the two intervels:");
    scanf("%d %d",&n1,&n2);
    printf("The armstrong numbers are: ");      //using thee digit armstrong number
    if(n1>0 && n1<n2){
        for(n1; n1<n2; n1++){
            temp=n1;
            for(int i=1;n1>0;i++){
                rem=n1%10;
                result+=pow(rem,3);                    //result=result+(rem*rem*rem);
                n1/=10;
                                                        //n1=n1/10
            }
            if(result==temp){
                printf("%d ",result);
            }
        }
    }
    return 0;
}

