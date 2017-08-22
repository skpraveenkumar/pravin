#include<stdio.h>
void main()
{
int s,sum=0,i;
printf("enter the value of n");
scanf("%d",&s);
for(i=1;i<=s;i++)
{
sum=sum+i;
}
printf("the sum is %d",sum);
return 0;
}
