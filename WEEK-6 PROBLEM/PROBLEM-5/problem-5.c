/* Write a program that prints a pyramid of asterisks as shown below. The number of lines in the pyramid
is an integer provided by the user as input. For example, for the input 4,
the output is the following.*/

#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter any number:");
scanf("%d",&n);

for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
        printf(" ");
    }
    for(j=0;j<2*i-1;j++){
        printf("*");
    }
    printf("\n");
}
return 0;

}
