#include<stdio.h>
int main()
{
    int i,times;
    scanf("%d",&times);
    i = 0;
    do
    {
    //i++;It gives us wrong result.
    printf("%d\n",i);
    i++;// Firstly,It will take initial value. After that it will increase.
    }
    while (i <= times);
    return 0;
}
