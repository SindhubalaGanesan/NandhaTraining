#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,r,si;
float i,p;
clrscr();
printf("Enter the principle amount");
scanf("%f",&p);
printf("Enter the time");
scanf("%d",&n);
printf("Enter the rate of interest");
scanf("%d",&r);
i=(p*n*r)/100;
si=floor(i);
printf("Simple interest:%d",si);
getch();
}
