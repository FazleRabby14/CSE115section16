#include<stdio.h>
int fibonacci (int n);
int main()
{
    int num,result;
    printf("Enter any number:");
    scanf("%d",&num);
    result=fibonacci(num);
    printf("Result is:%d",result);
    return 0;
}
int fibonacci (int n)
{
    int fibo,first=0,second=1,count=0;

    while(count<n){
        if(count<=1){
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
       count++;
    }

      return fibo;
}
