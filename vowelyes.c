#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[100];
int i,n,c,count=0;
clrscr();
printf("Enter the string\n");
gets(a);

for(i=0;a[i]!='\0';i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='O')||(a[i]=='I')||(a[i]=='U'))
{
count++;
}
}
if(count>0)
{
printf("Yes");
}
else
{
printf("No");
}
getch();
}
