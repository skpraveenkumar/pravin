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
printf("/nyou have entered 0");
else
printf("/nyou have enterd negative number");
}
else
printf("/nyou have entered positive number");
}
