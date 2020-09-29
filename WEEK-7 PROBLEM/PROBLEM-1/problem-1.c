/* 1. Write a program to print the odd and even numbers of an array.*/
#include<stdio.h>
#include<math.h>
int main()
{
 int i,n;
 printf("Enter any number:");
 scanf("%d",&n);

 int a[n];
 for(i=0;i<n;i++){  //The loop will run till the number of n.
    scanf("%d",&a[i]);

    if(a[i]%2==0){ // checking the number is even or odd.s
        printf("Even number:%d\n",i);
    }
    else{
        printf("Odd number:%d\n",i);
    }
 }
 return 0;
}
