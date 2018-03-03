#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20],c[20];
int i,x,y,z;
clrscr();
printf("Enter the two string\n");
gets(a);
gets(b);
x=strlen(a);
y=strlen(b);
z=x+y;
for(i=0;i<x;i++)
{
c[i]=a[i];
}
for(i=0;i<y;i++)
{
c[i+x]=b[i];
}
for(i=0;i<z;i++)
{
printf("%c",c[i]);
}
getch();
}
