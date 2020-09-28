#include<stdio.h>
int main()
{
    int i,times;
    scanf("%d",&times);
    i = 0;
    while (i <= times)
    {
    //i++; It gives us wrong result.
    printf("%d\n",i);
    i++;//Here,firstly print value and after that it will increase
    }
    return 0;
}
