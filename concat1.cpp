#include<stdio.h>

#include<conio.h>

#include<string.h>

void main()

{

char x[20],y[20],z[20];

int i,a,b,c;

clrscr();

printf("Enter the two string\n");

gets(x);

gets(y);

a=strlen(x);

b=strlen(y);

c=a+b;

for(i=0;i<a;i++)

{

z[i]=x[i];

}

for(i=0;i<b;i++)

{

z[i+a]=y[i];

}

for(i=0;i<c;i++)

{

printf("%c",z[i]);

}

getch();

}
