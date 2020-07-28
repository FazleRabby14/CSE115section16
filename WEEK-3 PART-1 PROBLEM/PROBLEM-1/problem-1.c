/*Write a program that takes an arithmetic operator ('+', '-', '*' or '/')
and two operands as input and perform the corresponding
calculation on the operands.Hint : Use Switch-Case.*/

#include<stdio.h>
#include<math.h>
int main()
{
 int num1,num2,result;
 char ch;
 printf("Enter any character:");
 scanf("%c",&ch);
 printf("Enter your first operand:");
 scanf("%d",&num1);
 printf("Enter your second number:");
 scanf("%d",&num2);
 switch(ch){
     case '+':
        result=num1+num2;
        printf("Your result is:%d",result);
     break;
     case '-':
        result=num1-num2;
        printf("Your result is:%d",result);
     break;
     case '/':
        result=num1/num2;
        printf("Your result is:%d",result);
     break;
     default:
        printf("You have entered invalid number:");
        break;
 }
 return 0;
}
