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
if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
count++;
}
}
d=n-count;
printf("The result is:\t%d",d);
getch();
}
