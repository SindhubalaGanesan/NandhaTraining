#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[20],r[20];
int i,n,c,count=0,d=0;
clrscr();
printf("Enter the string\n");
gets(a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(i=count-1;i>=0;i--)
{
r[count-i-1]=a[i];
}
for(i=0;i<count;i++)
{
if(r[i]==a[i])
{
d++;
}
}
if(d>0)
{
printf("It is palindrome");
}
else
{
printf("It is not palindrome");
}
getch();
}
