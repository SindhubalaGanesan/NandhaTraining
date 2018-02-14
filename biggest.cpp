#include <iostream>

using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter the input";
  cin>>a;
  cin>>b;
  cin>>c;
  if(a>b&&a>c)
  {
      cout<<"a is biggest number"<<endl;
      cout<<"A="<<a;
  }
  else if(b>c)
  {
      cout<<" b is biggest number"<<endl;
      cout<<"A="<<b;
  }
  else
  {
      cout<<"c is biggest number"<<endl;
      cout<<"A="<<c<<endl;
  }
}
