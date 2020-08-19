/* 1. Write a program to read the ages of 15 persons and count the
 number of persons whose age is between 40 and 60 inclusive.
 Use while and continue statements.*/

#include<stdio.h>

 int main()
 {
     int n;
     int count=0,age=0;
     while(count<=15){

        printf("Enter person age:");
         scanf("%d",&n);

        if(n>=40 && n<=60)
            age++;
            count++;

          continue;
     }
     printf("Number of person's age between 40 to 60:%d\n",age);

     return 0;
 }
