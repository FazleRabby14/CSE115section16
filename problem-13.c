// Shape-B
#include<stdio.h>
void Circle ();
void Rectangle();
void InvertedV();

int main()
{
    Circle();
    Rectangle();
    InvertedV();
    return 0;
}

void Circle(){

    for(int i=1; i<=4; i++)
    {
        for(int j=1;j<=1;j++){
            printf(" ");
        }
        for(int j=1; j<=4; j++)
        {

            if((i==1 && (j==1 || j==4)) ||
               (i==4 && (j==1 || j==4)) ||
               (i==4*2-1 && (j==1 || j==4)))
            {
                printf(" ");
            }
            else if(i==1 || i==4 || i==(4*2)-1 || j==1 || j==4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

}
void Rectangle(){
 for(int i=1;i<=5;i++){
        for(int j=1;j<=1;j++){
            printf(" ");
        }
    for(int j=1;j<=5;j++){
        if(i==5||j==1||j==5||i==1){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
 }
}
void InvertedV(){
 for(int i=1;i<=4;i++){
    for(int j=1;j<=4-i;j++){
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++){
        if(j==1||j==(2*i-1)){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
 }
}



