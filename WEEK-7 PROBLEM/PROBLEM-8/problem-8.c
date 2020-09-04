/* 8. Write a program that will take input of two matrices and perform the
 multiplication (dot product) of those matrices storing the result in another
 matrix.*/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int i,j,a[10][10],b[10][10],c[10][10];
     int m1,m2,k,n2,n1,sum=0;

     printf("Enter any two number:");
     scanf("%d %d",&n1,&m1);
     printf("Enter any two number:");
     scanf("%d %d",&n2,&m2);


     for(i=0;i<n1;i++){
       for(j=0;j<m1;j++){
         printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);// Take input according to the value of n.
       }
     }

      for(i=0;i<n2;i++){
       for(j=0;j<m2;j++){
         printf("b[%d][%d]=",i,j);
        scanf("%d",&b[i][j]);// // Take input according to the value of n.
       }
     }
     printf("\n");

        for(i=0;i<n1;i++){
       for(j=0;j<m2;j++){
        for(k=0;k<m1;k++){
          if(m1==n2)
         sum=sum+a[i][k]*b[k][j];/* Multiplication and summation of this
                                    particular matrix.*/

        }

         c[i][j]=sum;// Storing value after summation.
         sum=0;
       }
     }

     for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            printf("c[%d][%d]=",i,j);
            printf("%d\t",c[i][j]);
        }
        printf("\n");
     }
     return 0;
 }

