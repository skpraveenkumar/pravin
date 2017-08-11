#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the number");
scanf("%d",&a);
if(a<=0)
{
if(a==0)
printf("you have entered 0");
else
printf("you have enterd negative number");
}
else
printf("you have entered positive number");
}
