
#include<stdio.h>
#include<conio.h>
void main()
{
int m,h,n;
clrscr();
printf("Enter the minitues");
scanf("%d",&m);
h=m/60;
n=m%60;
printf("Hour:Minitue=%d:%d",h,n);
getch();
}
