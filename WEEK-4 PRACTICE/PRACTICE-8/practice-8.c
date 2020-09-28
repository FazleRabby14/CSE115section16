#include<stdio.h>
int main()
{
    int i=0;
    while (i < 10)
    {
    i++;
    printf("%d\n",i);
    if (i == 5)
    /* If our condition match then it will exit the loop
    and print this certain values.*/
    break;
    }
    return 0;
}
