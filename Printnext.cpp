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
      c=n+1;
      cout<<"Output is:"<<c<<endl;
  }
};

int main()
{
    Sum s;
    s.display();
}
