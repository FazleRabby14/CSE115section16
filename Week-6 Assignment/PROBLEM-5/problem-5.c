/* 5. Write a C program that will tell the user what a Perfect Number is and will print the first
n Perfect Number in Number. Line (Input n will be taken from user).*/

#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter any number:");
    scanf("%d",&num);

 for(i=1;i<num;i++){
    if(num%i==0){
        sum=sum+i;
    }
 }
    if(num==sum){
        printf("Number is perfect number");
    }
    else{
        printf("Not perfect number");
    }
 return 0;
}

