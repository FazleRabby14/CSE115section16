/* Write a program to check whether a year is leap year or not.
Take the year as input.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int year,result;
    printf("Enter any year:");
    scanf("%d",&year);
    result=((year%4==0)&&((year%400==0)||(year%100!=0)));
    //check year is leap year or not
    switch(result){
       case 1:
       printf("Year is leap year");
       break;
       case 0:
       printf("Year is not leap year");
       break;
       default:
       printf("Invalid year");
       break;//It is not necessary we can use it or not
    }
    return 0;
}
