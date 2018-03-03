#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i,d,e;
clrscr();
printf("Enter the number");
scanf("%d",&a);
scanf("%d",&b);
c=a*b;
for(i=1;i<=b;i++)
{
if(c==(i*i))
{
e=c;
}
}

  if(c==e)
  {
  printf("yes");
  }
  else
  {
  printf("no");
  }

getch();
}
