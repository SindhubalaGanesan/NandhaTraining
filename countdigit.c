#include<stdio.h>
#include<conio.h>
void main()
{
int r,a,count=0;
clrscr();
printf("Enter the number");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
count++;
a=a/10;
}
printf("Count is:\t%d" ,count);
getch();
}
