
#include <iostream>

using namespace std;
class Mul13
{
  private:
  int a;
  public:
  void display()
  {
      cout<<"Enter the number"<<endl;
      cin>>a;
      if(a%13==0)
      {
          cout<<"Yes";
      }
      else
      {
          cout<<"No";
      }
  }
};

int main()
{
    Mul13 m;
    m.display();

    return 0;
}
