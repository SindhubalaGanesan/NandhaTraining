#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,c=0;
clrscr();
printf("Enter the number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
c++;
}
}
if(c>0)
{
printf("It is composite number");
}
else
{
printf("It is not composite number");
}
getch();
}
