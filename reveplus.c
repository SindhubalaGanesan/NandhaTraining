#include<stdio.h>
#include<conio.h>
void main()
{
int b,re,sum1=0;
clrscr();
printf("Enter the number");
scanf("%d",&b);
while(b!=0)
{
re=b%10;
sum1=sum1+(re*re);
b=b/10;
}
printf("The result is=%d",sum1);
getch();
}
