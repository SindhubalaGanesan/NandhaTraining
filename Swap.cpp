#include <iostream>

using namespace std;

int main() 
{
int a,b,c;
cout<<"Enter the number";
cin>>a>>b;
if(a<10000&&b<10000)
{
c=a;
a=b;
b=c;
cout<<"after swapping:";
cout<<"a="<<a<<"\t"<<"b="<<b;
}
else
{
    cout<<"Enter the input only lassthan 10000";
}
}
