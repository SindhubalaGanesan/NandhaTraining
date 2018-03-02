#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0;
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==0)
{
printf("It is prime");
}
else
{
printf("It is not prime");
}
getch();
}
