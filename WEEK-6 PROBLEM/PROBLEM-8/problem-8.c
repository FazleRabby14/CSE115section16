#include<stdio.h>
double getArea(int a, int b, int h);
int main()
{
    int x,y,z;
    double result;
    printf("Enter any three variable:");
    scanf("%d %d %d",&x,&y,&z);
    result=getArea(x,y,z);
    printf("Trapezoid area:%lf",result);
    return 0;

}
double getArea(int a, int b, int h)
{
    double area=1/2.0*(a+b)*h;
    return area;
}
