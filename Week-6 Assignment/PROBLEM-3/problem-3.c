/* 3. Write a C program to get the multiplication result of first n prime numbers from 2 to a given
range m. The input m will be taken from user.*/

#include<stdio.h>
int main()
{
    int i,flag,n,m;
    printf("Enter two number:");
    scanf("%d %d",&n,&m);

    while(n<m){
        flag=0;// Check for prime number if it is true.
        if(n<=1){
            n++;
            continue;
        }
     for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
     }
     if(flag==0)
        printf("%d\n",n);
        n++;
    }
    return 0;
}
