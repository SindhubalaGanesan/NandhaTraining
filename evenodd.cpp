#include <iostream>

using namespace std;
int main()
{
  int a;
  cout<<"Enter your number";
  cin>>a;
  if(a>=1&&a<=100000)
  {
  if(a%2==0)
  {
      cout<<"It is Even";
}
else
{
    cout<<"It is odd";
}
}
else
{
    cout<<"It is greater than 100000& all are will be positive";
}


    return 0;
}
