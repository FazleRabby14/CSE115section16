/*Write a C program that takes an integer as an input and determines
whether it is a multiple of 7 or not.*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%7==0){
        printf("Number is multiple of 7");
    }
    else{
        printf("Number is not multiple of 7");
    }
    return 0;
}

