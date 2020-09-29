/* 7. Write a program that takes input of two matrices from user and later
 perform the addition of the two matrices printing in another resultant
 matrix.*/

 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int i,j,n,a[10][10],b[10][10],c[10][10];

     printf("Enter any number:");
     scanf("%d",&n);

     for(i=0;i<n;i++){
       for(j=0;j<n;j++){
         printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);// Take input according to the value of n.
       }
     }
      for(i=0;i<n;i++){
       for(j=0;j<n;j++){
         printf("b[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);// // Take input according to the value of n.
       }
     }
     printf("\n");
        for(i=0;i<n;i++){
       for(j=0;j<n;j++){
         c[i][j]=a[i][j]+b[i][j];// Sum of two matrix.

        printf("%d\t",c[i][j]);// Print the summation of matrix.
       }
       printf("\n");
     }
     return 0;
 }
