#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<=9; i++)
    {
        printf("\n");
    // It will help me to print new line. After completing each line task.
        for (int j=1; j<=i; j++)
        {
        printf("%d", j);//printing only j value
        }
    }
    printf("\n");
    return 0;
}
