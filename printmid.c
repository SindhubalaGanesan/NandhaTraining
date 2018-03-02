#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
int i,count=0;
clrscr();
printf("Enter the string\n");
gets(a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
if(count%2==0)
{
a[i/2]='*';
}
else
{
a[count/2]='*';
}
for(i=0;i<count;i++)
{
printf("%c",a[i]);
}
getch();
}
