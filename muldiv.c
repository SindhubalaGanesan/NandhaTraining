#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("Enter the 3  number");
scanf("%d%d%d",&a,&b,&c);
if(a<1000&&b<1000&&c<1000)
{
d=(a*b)/c;
printf("%d",d);
}
else
{
printf("Enter the 3 inputs greater than 1000");
}
getch();
}
