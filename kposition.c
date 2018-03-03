#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,a[100],i;
clrscr();
printf("Enter the N and K\n");
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("%d",a[k]);
getch();
}
