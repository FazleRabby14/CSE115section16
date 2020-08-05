#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<=3; i++)
    {
        printf("\n");
        //If we don not use it. Our output result will print in a single line.
        for (int j=1; j<=10; j++)
        {
        printf("%d X %d = %d\n", i, j, i*j);
    //Printing i,j value and multiplication of i*j value.
        }
    }
    printf("\n");
    return 0;
}
