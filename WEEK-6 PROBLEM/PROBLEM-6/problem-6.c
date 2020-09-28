#include<stdio.h>
#include<math.h>

void findArea(int radius);
void findVolume(int radius);

int main(){
    int n;
    printf("Enter radius:");
    scanf("%d",&n);
    findArea(n);
    findVolume(n);
    return 0;
}

void findArea(int radius){

    float result=4*3.1416*radius*radius;
    printf("Sphere:%f\n",result);

}

void findVolume(int radius){

    float result=(4/3.0)*3.1416*radius*radius*radius;
    printf("Volume:%f\n",result);

}
