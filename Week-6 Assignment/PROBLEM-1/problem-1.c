// Write a C program to calculate the sum of the following series (n will be taken from user):
#include<stdio.h>
int main()
{
    float sum=1,fact=1,i,n;
    printf("Enter any number:");
    scanf("%f",&n);

    for(i=1;i<=n;i+=2){

        fact=(i/(fact*i));
        sum=sum+fact;
        fact++;

       }

    printf("Summation of the factorial:%f",sum);
    return 0;
}
