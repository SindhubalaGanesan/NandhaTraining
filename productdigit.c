#include<stdio.h>
#include<conio.h>
void main()
{
int a,s=1,r;
clrscr();
printf("Enter the number");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
s=s*r;
a=a/10;
}
printf("%d",s);
getch();
}
