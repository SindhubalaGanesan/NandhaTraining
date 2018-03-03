#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,small;
clrscr();
printf("Enter the number");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
small=a[0];
for(i=0;i<10;i++)
{
if(small>a[i])
{
small=a[i];
}
}
printf("%d",small);
getch();
}

