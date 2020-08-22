//2. Write a C program that can convert a decimal number to corresponding binary number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int a[10];
    printf("Enter a decimal number:");
    scanf("%d",&n);

    for(i=0;n>0;i++){
    a[i]=n%2;/* Firstly,it will take value and multiply by %2 and store it according
                  to the value of i.*/
    n=n/2;
    }
    printf("Binary of given number:");
    for(i=i-1;i>=0;i--){ // It will helps to count result lower to uper.
        printf("%d",a[i]);
    }
    return 0;
}
