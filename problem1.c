#include <stdio.h>

int main(){
    char company[]={'A','B','C','D','E'};
    long int insuranceamount[]={48000,120000,840000,360000,240000};
    int length,maximumamount;
    length=sizeof(insuranceamount)/sizeof(insuranceamount[0]);
    for(int i=0; i<length-1; i++){

        if(insuranceamount[i]>insuranceamount[i+1])
             maximumamount=insuranceamount[i];

       printf("%d",maximumamount);
    }

    return 0;
}
