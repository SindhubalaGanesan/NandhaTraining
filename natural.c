#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
clrscr();
printf("Enter the number");
scanf("%d",&n);
if(n<=10000)
{
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
else
{
printf("Enter the input greater than 10000");
}
getch();
}
