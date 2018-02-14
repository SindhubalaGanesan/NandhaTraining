
#include <iostream>

using namespace std;
int main()
{
  int i;
  cout<<"Enter your number";
  cin>>i;
  if(i>=1&&i<=100000)
  {
  if(i>0)
  {
      cout<<"It is positive";
}
else
{
    cout<<"It is negative or It may be 0";
}
}
else
{
    cout<<"It is greater than 100000& all are will be positive";
}


    return 0;
}

