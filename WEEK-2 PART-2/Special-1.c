/*Write a C code that takes a number from user and check that
 it is positive/negative/natural/rational or irrational number.*/

#include<stdio.h>
#include<math.h>
int main(){
 float num;
 printf("Enter any number:");
  scanf("%f",&num);
//Firstly,I take a number from user
  if(num<0){
    printf("It is negative real number:\n");
  }
  if(num>0){
    printf("It is positive real number:\n");
  }

   if(num>0 && num-(int)num==0){
    printf("It is natural number:\n");
    //Here we check our value is fractional or not.
 }
    if(sqrt(num)-(int)(sqrt(num))==0){
    printf("It is rational number:\n");
   }
   //Here I check my corresponding value rational or not.

   else{
    printf("It is irrational number");
   }

 return 0;
 }
