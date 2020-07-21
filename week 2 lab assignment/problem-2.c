#include<stdio.h>
int main()
{
    double base,height,result,hypotenuse;
    printf("Enter your triangle base:");
    scanf("%lf",&base);
    printf("Enter your triangle height:");
    scanf("%lf",&height);
    result=.5*base*height;
    hypotenuse=sqrt(base*base+height*height);
    printf("Your triangle result:%lf\n",result);
    printf("Your triangle hypotenuse:%lf\n",hypotenuse);
    return 0;
}
