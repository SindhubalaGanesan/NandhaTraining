
#include <iostream>

using namespace std;
class Swap
{
  
  private:
  int a,b;
  public:
  void display()
  {
  cout<<"Enter the number"<<endl;
  cin>>a>>b;
  a=a^b;
  b=a^b;
  a=a^b;
  cout<<"After swapping"<<endl;
  cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
  }
  
};

int main()
{
    Swap s;
    s.display();
}
