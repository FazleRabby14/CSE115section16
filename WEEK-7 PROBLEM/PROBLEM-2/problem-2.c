/* 2. Write a program that copies the elements of an array in reverse order
 to another array. At the end the program should be able to
 print both arrays.*/
 #include<stdio.h>
 int main()
 {
     int n,i,j;
     printf("Enter any number:");
     scanf("%d",&n);
     int a[n];

     for(i=0;i<n;i++){
        scanf("%d",&a[i]); //Take array input from user.
     }
     printf("Input arrays printing:\n");
     for(i=0;i<n;i++){

        printf("%d\t",a[i]);// Printing array input.
     }
    printf("\n");
    printf("Printing reverse array:\n");

     for(j=n-1;j>=0;j--){
        printf("%d\t",a[j]);// Printing those reverse array.
     }
     return 0;
 }
