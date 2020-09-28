#include<stdio.h>
int main()
{
    int i,times;
    scanf("%d",&times);
    for( i=0;i<times;++i)
        /*Here,I use pre increment instead of post increment.
        It gives me same result.*/
    {
    printf("%d\n",i);
    }
    return 0;
}
