/*3. In the following problem, an integer given as input. In the output,
 the number of lines is equal to this number. In every odd
 numbered line (e.g. 1st, 3rd, 5th and so on) you have to print the odd
 numbers from 1 to that line number. On the other hand, in the even numbered lines,
print all the even numbers from 2 to that line number.*/

#include <stdio.h>
#include<math.h>

int main()
{
    int i,j,n;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=2;j<=i;j+=2){
         if(i%2==0){
            printf("%d",j);
         }
      }
        for(j=1;j<=i;j+=2){
        if(i%2!=0){
            printf("%d",j);
        }
          }
       printf("\n");
    }
    return 0;
}
