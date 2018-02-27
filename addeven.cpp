#include <iostream>

using namespace std;
class Add
{
  private:
  int a,b,c;
  public:
  void display()
  {
      cout<<"Enter the number"<<endl;
      cin>>a>>b;
      c=a+b;
      if(c%2==0)
      {
          cout<<"Even"<<endl;
      }
      else
      {
          cout<<"Odd"<<endl;
      }
  }
};

int main()
{
    Add a;
    a.display();

    return 0;
}
