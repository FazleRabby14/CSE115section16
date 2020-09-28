/* Write the function int computeAverage(int a, int b) which takes 2
integers as input and return their average.*/

#include<stdio.h>

int computeAverage(int a, int b);

int main()
{
    int var1,var2,r;
    scanf("%d %d",&var1,&var2);
    r=computeAverage(var1,var2);
    printf("Result of average two number:%d",r);
    return 0;
}
int computeAverage(int a, int b){
int avg,sum;
avg=(a+b)/2;
return avg;

}
