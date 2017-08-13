#include<stdio.h>
void main()
{
char x;
printf("enter a alphabet");
scanf("%c",&x);
  if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
    printf("The enterd alphabet is a vowel");
  else
    printf("The enterd alphabet is a consonent");
  return(0);
}
