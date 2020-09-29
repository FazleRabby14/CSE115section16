#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        sum=sum+a[i];
    }
    printf("Summation:%d\n",sum);

    return 0;
}
