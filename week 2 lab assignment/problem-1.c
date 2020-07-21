#include<stdio.h>
int main()
{
    double n,avg,sum=0,result;
    printf("Enter any five number:");
    for(int i=1;i<=5;i++){
        scanf("%lf",&n);
        sum=sum+n;
    }
       avg=sum/5;
       printf("The average of five number:%lf",avg);
    return 0;
}

