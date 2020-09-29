// Find the sum of the following series
#include<stdio.h>
int main()
{
   int num,sum=0;
   printf("Enter any number:");
   scanf("%d",&num);
   for(int i=0;i<=num;i++){
      sum=sum+i;
   }
   printf("The sum of the series:%d",sum);
   return 0;
}
