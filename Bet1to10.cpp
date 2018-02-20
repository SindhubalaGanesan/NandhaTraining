#include <iostream>

using namespace std;
class Display
{
  private:
  int a;
  public:
  void display()
  {
  cout<<"Enter the number :"<<endl;
  cin>>a;
  if(a>=1&&a<=10)
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
    Display s;
    s.display();
}
