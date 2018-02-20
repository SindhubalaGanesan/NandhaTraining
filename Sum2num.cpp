#include <iostream>

using namespace std;
class Sum
{
  private:
  int a,b,c;
  public:
  void display()
  {
      cout<<"Enter the 2 numbers"<<endl;
      cin>>a>>b;
      c=a+b;
      cout<<"The output is :"<<c;
      
  }
};

int main()
{
    Sum s;
    s.display();
}
