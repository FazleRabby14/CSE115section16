//6. Write a program that prints the top three largest elements of an array.
#include<stdio.h>
int main()
{
    int i,n,first=0,second=0,third=0;
    printf("Enter any number:");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);// Take value and store it.

        if(a[i]>first){ /*It will take the largest element of an array
                            after comparing.*/
            third=second;
            second=first;
            first=a[i];
        }
        else if(a[i]>second){ // Take second largest value from array.
            third=second;
             second=a[i];
        }
        else if(a[i]>third){
            third=a[i];
        }

    }

    printf("First=%d Second=%d Third=%d\n",first,second,third);

    return 0;
}
