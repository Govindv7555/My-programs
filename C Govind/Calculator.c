#include<stdio.h.>
void main()
{
 int a,b,c;
 printf("Enter Your Choices\n1.Press 1 For Addition\n2.Press 2 For Subtraction\n3.Press 3 For Multiplication\n4.Press 4 For Division\n");
 scanf("%d",&c);
 if(c==1)
 {
     printf("Enter 1st Number:");
     scanf("%d",&a);
     printf("Enter 2nd Number:");
     scanf("%d",&b);
     printf("The Sum Is:%d",a+b);
 }
 else if(c==2)
 {
     printf("Enter 1st Number:");
     scanf("%d",&a);
     printf("Enter 2nd Number:");
     scanf("%d",&b);
     printf("The Difference Is:%d",a-b);
 }
 else if(c==3)
 {
     printf("Enter 1st Number:");
     scanf("%d",&a);
     printf("Enter 2nd Number:");
     scanf("%d",&b);
     printf("The Product Is:%d",a*b);
 }
 else if(c==4)
 {
     printf("Enter 1st Number:");
     scanf("%d",&a);
     printf("Enter 2nd Number:");
     scanf("%d",&b);
     printf("The Quotient Is:%d",a/b);
 }
 else
 {
     printf("Not In The List");
 }



}