#include<stdio.h>
void main()
{
  int b,c,d;
  char a[20];
  b=3000;
  printf("Welcome,to Govind's ATM\n");
  printf("Enter your Name =\n");
  scanf("%s",&a);
  printf("hello,%s\nYour current balance is = %d\n",a,b);
  printf("Press 1 to Debit\n");
  scanf("%d",&c);
  if(c==1)
 {
     printf("Enter the amount you want to debit = \n");
     scanf("%d",&d);
     if(d<=b)
     {
     printf("Successfully Debited\nThe Current Balance is = %d\n",b-d);
     printf("Thanks for using Govind's ATM\n");
     }
     else
     {
         printf("Entered incorrect amount to debit\n");
     }
 }
 else
 {
     printf("Sorry not in the list\n");
 }
}
