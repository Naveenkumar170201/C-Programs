
#include <stdio.h>
int main()
{
    int i,n1,n2;
    printf("Enter the two intervels:");
    scanf("%d %d",&n1,&n2);
    printf("prime numbers are:");
        for(n1;n1<n2;n1++){
                int flag=0;
            for(i=2 ;i<n1; i++){
                if(n1%i==0){
                    flag=1;
                }
            }
            if(flag==0){
            printf("%d ",n1);
            }
        }
        return 0;
    }
