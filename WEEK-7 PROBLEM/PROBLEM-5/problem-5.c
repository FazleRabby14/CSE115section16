/* 5. Write a program which will take an array as input from
user (or hard coded inside program), later it will take another two inputs:
firstly, the position of an element and then the element. The position should
 be within the range of the size of the array. The new input will later replace
 the existing number in array at the index/position.*/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int i,n,pos,element;
     printf("Enter any number:");
     scanf("%d",&n);
     int arr[n];

     for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&arr[i]);

     }

     scanf("%d",&pos);// Taking what is the position.
     scanf("%d",&element);// Which element we will take.

     for(i=n-1;i<=pos;i--){ /*During changing value it will shift position
                            n to (n+1).*/
     }
        arr[i+1]=arr[i];
        arr[pos]=element;

     for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
     }
     return 0;
 }
