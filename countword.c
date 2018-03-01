#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[1000];
int i,n,c,count=0,d;
clrscr();
printf("Enter the string\n");
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]=='.')
{
count++;
}
}
d=count+1;
printf("The result is:\t%d",d);
getch();
}
