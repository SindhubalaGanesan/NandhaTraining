#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,d[100],s,i;
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
s=d[i];
}
}
if(s==k)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
