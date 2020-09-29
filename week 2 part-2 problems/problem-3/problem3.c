// Write a program to check a number whether it's even or odd.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%2!=0){
        printf("Number is odd");
    }
    else{
        printf("Number is even");
    }
    return 0;
}
