#include<stdio.h>
int main()
{
    int i, times;
    scanf("%d",&times);
    i = times;
    while (i >=0)
    {
    //i--; It gives us wrong result.
    printf("%d\n",i);
    i--;//Firstly,print our initial value.After that, it will decrease.
    }
    return 0;
}
