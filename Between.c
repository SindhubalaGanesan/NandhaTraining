#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,i,c;
clrscr();
printf("Enter the number");
scanf("%d",&n);
printf("Enter the interval");
scanf("%d%d",&a,&b);
for(i=a+1;i<=b-1;i++)
{
if(n==i)
{
c=i;
}
}
if(c==n)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
