#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[100];
int i,n,c,count=0,d;
clrscr();
printf("Enter the string\n");
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if((a[i]>='0'&&a[i]<='9'))
{
count++;
}
}
printf("The result is:\t%d",count);
getch();
}
