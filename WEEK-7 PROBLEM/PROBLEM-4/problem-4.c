/* 4. Write a program that will take two arrays as input from users.
Later your program needs to merge those arrays and will also sort the array in
ascending/descending order.*/
#include<stdio.h>
int main()
{
    int i,j,k=0,temp;
    int a1[5]={1,5,2,6,4};
    int a2[5]={8,9,7,12,11};
    int a3[10];

    for(i=0;i<10;i++){
        if(i>4){
            a3[i]=a2[k];
            k++;
        }
        else{
            a3[i]=a1[i];
        }
    }
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(a3[j]<a3[i]){
                temp=a3[i];
                a3[i]=a3[j];
                a3[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d\t",a3[i]);
    }
    return 0;
}
