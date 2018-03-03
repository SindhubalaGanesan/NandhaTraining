#include<stdio.h>
#include<conio.h>
void main()
{
int num1,a,c1=0;
clrscr();
printf("Enter the number");
scanf("%d",&num1);
for(a=2;a<num1;a++)
{
if(num1%a==0)
{
c1++;
}
}
if(c1>0)
{
printf("It is composite number");
}
else
{
printf("It is not composite number");
}
getch();
}
