/*1. Implement the following function which finds the length of a string
using pointer operation.*/

#include<stdio.h>
int length(char *s);
int main()
{
    char st[20];
    int r;
    gets(st);
    r=length(st);
    printf("Your String length:%d",r);
    return 0;
}
int length(char *s){
int len=0,i;

for(i=0;s[i]!='\0';i++){
    len++;
 }
return len;
}



