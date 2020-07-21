#include<stdio.h>

int main()
{
    double radius,area,perimeter;
    printf("Enter any value:");
    scanf("%lf",&radius);
    area=3.1416*radius*radius;
    printf("The circle area is:%lf\n",area);
    perimeter=2*3.1416*radius;
    printf("The circle perimeter is:%lf\n",perimeter);
    return 0;
}

