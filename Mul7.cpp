#include <iostream>

using namespace std;
class Mul7
{
  private:
  int a;
  public:
  void display()
  {
      cout<<"Enter the number"<<endl;
      cin>>a;
      
      if(a%7==0)
      {
          cout<<"Yes"<<endl;
      }
      else
      {
          cout<<"No"<<endl;
      }
  }
};

int main()
{
    Mul7 m;
    m.display();

    return 0;
}
