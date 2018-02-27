#include <iostream>

using namespace std;
class Add
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
    Add a;
    a.display();

    return 0;
}
