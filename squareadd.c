#include<stdio.h>
#include<conio.h>
void main()
{
int a,r,sum=0;
clrscr();
printf("Enter the number");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
sum=sum+(r*r);
a=a/10;
}
printf("The result is=%d",sum);
getch();
}
