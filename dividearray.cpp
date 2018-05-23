#include<iostream>
using namespace std;
class Example
{
private:
int n,i,j,s1=0,s2=0,c=0,d=0,a1=0,a2=0;
public:
void display()
{
cout<<"enter the number"<<endl;
cin>>n;
int a[n];
int x=n/2;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<x+1;i++)
{
s1=s1+a[i];
c++;
}
a1=s1/c;
for(i=x+1;i<n;i++)
{
s2=s2+a[i];
d++;
}
a2=s2/d;
if(a1==a2)
{
cout<<"yes"<<endl;
}
else
{
cout<<"no"<<endl;
}
}
};
int main()
{
Example e;
e.display();
return 0;
}
