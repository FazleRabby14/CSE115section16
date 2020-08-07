// Write a program that takes an integer as input and shows its factorial.
#include<stdio.h>
int main(){
   int i,fact=1,sum=0;
   for(i=1;i<=5;i++){
    fact=fact*i;
   }
   printf("Factorial number result:%d",fact);
   return 0;
}
