/*Write a C program that takes an integer as input integer as
input and tests if it is positive or negative.*/
#include<stdio.h>
#include<math.h>
int main(){
int num;
printf("Enter any number:");
scanf("%d",&num);
if(num>0){
    printf("Number is positive");
}
else{
    printf("Number is Negative");
}
return 0;
}

