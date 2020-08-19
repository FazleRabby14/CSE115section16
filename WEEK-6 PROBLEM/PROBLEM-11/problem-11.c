#include<stdio.h>
#include<math.h>
int seriesSum1 (int a);
int main()
{
    int num,result;
    printf("Enter any number:");
    scanf("%d",&num);
    result=seriesSum1(num);
    printf("Result:%d",result);
    return 0;
}
int seriesSum1 (int a)
{
    int sign,step=0,sum=0,i;
    for(i=0;a>i;i++){
        sign=pow(-1,step);
        sum=sum+sign*(pow(a-i,2));
        step++;
    }
    return sum;

}
