
#include <iostream>
using namespace std;
class Example
{
  private:
  int b,h;
  public:
  void display()
  {
      cout<<"Enter the base and height:";
      cin>>b>>h;
      int c=0.5*b*h;
      cout<<"The area of triangle:"<<c<<endl;
  }
};

int main()
{
 Example e;
 e.display();

    return 0;
}
