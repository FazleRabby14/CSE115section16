/*Write a program that takes a month as input and shows the number
of days that particular month has. (Use Switch-Case).*/
#include<stdio.h>
#include<math.h>
int main()
{
    int month;
    printf("Enter any month:");
    scanf("%d",&month);
    switch(month){
        case 1:
        printf("Number of days 31");
        break;
        case 2:
        printf("Number of days 28");
        break;
        case 3:
        printf("Number of days 30");
        break;
        case 4:
        printf("Number of days 30");
        break;
        case 5:
        printf("Number of days 31");
        break;
        case 6:
        printf("Number of days 31");
        break;
        case 7:
        printf("Number of days 30");
        break;
        case 8:
        printf("Number of days 30");
        break;
        case 9:
        printf("Number of days 31");
        break;
        case 10:
        printf("Number of days 30");
        break;
        case 11:
        printf("Number of days 30");
        break;
        case 12:
        printf("Number of days 31");
        break;
        default:
        printf("Invalid month");
    }
    return 0;
}
