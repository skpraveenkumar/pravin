#include<stdio.h>
void main()
{
int N,sum=0,i;
printf("enter the value of n");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
sum=sum+i;
}
printf("the sum is %d",sum);
return 0;
}
