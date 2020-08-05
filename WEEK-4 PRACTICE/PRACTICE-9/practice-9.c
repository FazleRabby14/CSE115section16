#include<stdio.h>
int main()
{
    int num=10;
    for(int i=0;i<num;i++)
    {
    if(i==4)
    continue;
    /* If our condition match then it will skip only this certain
       value.After that it will again start working.*/
    printf("%d\n",i);
    }
    return 0;
}

