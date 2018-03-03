#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,d[100],i,count=0;
clrscr();
printf("Enter the n and k");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&d[i]);
}
for(i=0;i<n;i++)
{
if(k==d[i])
{
count++;
}
}
printf("%d",count);
getch();
}
