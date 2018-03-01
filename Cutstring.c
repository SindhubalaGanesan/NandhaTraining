#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
char b[20];
clrscr();
printf("Enter the string");
scanf("%s",&b);
printf("Enter the number");
scanf("%d",&a);
for(i=0;i<a;i++)
{
printf("%c",b[i]);
}
getch();
}
