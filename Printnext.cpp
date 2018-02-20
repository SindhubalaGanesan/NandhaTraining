#include <iostream>

using namespace std;
class Sum
{
  private:
  int n,c;
  public:
  void display()
  {
      cout<<"Enter the number"<<endl;
      cin>>n;
      if(n<10000000)
      {
      c=n+1;
      cout<<"Output is:"<<c<<endl;
      }
      else
      {
          cout<<"Enter the number upto 10000000"<<endl;
      }
  }
};

int main()
{
    Sum s;
    s.display();
}
