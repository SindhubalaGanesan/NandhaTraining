#include<stdio.h>
#include<conio.h>
void main()
{
int b,re,sum1=0;
clrscr();
printf("Enter the number");
scanf("%d",&b);
if(b<10000)
{
while(b!=0)
{
re=b%10;
sum1=sum1+(re*re);
b=b/10;
}
printf("The result is=%d",sum1);
}
else
{
    printf("enter only less than 10000");
}
getch();
}
