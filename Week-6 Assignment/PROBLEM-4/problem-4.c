/* Write a C program that will tell the user what an Armstrong Number is and the first n Armstrong
Number in Number Line. (Input n will be taken from user).*/

#include<stdio.h>
int main()
{
    int num,temp,sum=0,r;
    printf("Enter any number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(num==sum){
        printf("Number is Armstrong");
    }
    else{
        printf("Not Armstrong number");
    }
    return 0;
}
