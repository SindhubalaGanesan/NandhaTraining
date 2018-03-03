#include<stdio.h>
#include<conio.h>
void main()
{
int a,r1=0,r;
clrscr();
printf("Enter the number");
scanf("%d",&a);
if(a<=1000)
{
while(a!=0)
{
r=a%10;
r1=r1*10+r;
a=a/10;
}
printf("%d",r1);
}
else
{
printf("Enter the number greater than 1000");
}
getch();
}
