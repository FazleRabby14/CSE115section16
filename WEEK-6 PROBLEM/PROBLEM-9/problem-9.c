#include<stdio.h>
void printStarPyramid (int lines);
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    printStarPyramid(n);
    return 0;
}
void printStarPyramid (int lines)
{
    for(int i=0;i<lines;i++){
        for(int j=0;j<lines-i;j++){
            printf(" ");
        }
        for(int j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
