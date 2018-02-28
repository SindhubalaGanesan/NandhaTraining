
#include <iostream>

using namespace std;
class Near
{
  private:
  int a;
  public:
  void display()
  {
      cout<<"Enter the number"<<endl;
      cin>>a;
      if(a%2==0)
      {
          cout<<"The Nearest is even number is:"<<a;
      }
      else
      {
          cout<<"The Nearest even number is:"<<a-1;
      }
  }
};

int main()
{
    Near n;
    n.display();

    return 0;
}
