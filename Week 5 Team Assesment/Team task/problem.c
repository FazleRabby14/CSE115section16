/* Suppose you are a programmer in a mobile operator company and
 your boss has given you a task to write a program in C that displays
all the bundle the company offers.The various kinds of offers include: */

#include<stdio.h>
int main()
{
    int offer;

    printf("1.Sms offer:\n");
    printf("2.Talk-Time offer:\n");
    printf("3.Internet Offer:\n");
    printf("4.Monthly Plan Offer:\n");
    printf("5.Recharge Offer:\n");
    printf("6.Star customer Offer:\n");
    printf("7.Gold Customer Offer:\n");
    printf("8.Platinum Customer Offer:\n");
    printf("9.Pay as you Go:\n");
    printf("\n");


    printf("Choose any type of offer (1-9):");
    scanf("%d",&offer);

    switch(offer)

    {
       case 1:
       printf("50 sms:5.99 taka,100sms:8.02 taka,300 sms:15.00 taka.\n ");
       printf("Validity 7 days.\n");
       break;

       case 2:
       printf("50 minutes:31.95 taka,300 minutes:179.89 taka,"
              "1000 minutes:599.63 taka.\n");

       printf("Validity 15 days.\n");
       break;

       case 3:
       printf("100 MB:42.70 taka,250 MB:52.37 taka,1.5 GB:93.55 taka.\n");
       printf("Validity 30 days.\n");
       break;

       case 4:
       printf("500 MB,200 SMS,100 minutes Talk-Time:293.47 taka.\n");
       printf("Validity 30 days.\n");
       break;

       case 5:
       printf("250 MB,20 SMS:on 29 taka recharge.\n");
       printf("Validity 21 days.\n");
       break;

       case 6:
       printf("3 GB,100 minutes,50 sms:120 taka.\n");
       printf("Validity 45 days.\n");
       break;

       case 7:
       printf("5 GB,150 minutes,100 sms:130 taka.\n");
       printf("Validity 45 days.\n");
       break;

       case 8:
       printf("9 GB,200 minutes,150 sms: 150 taka.\n");
       printf("Validity 45 days.\n");
       break;

       case 9:
       printf("60 taka per second.\n");
       printf("Validity till balance remains.\n");
       break;

       default:
        printf("You have selected Invalid Option.\n");
       break;

    }
    return 0;
}

