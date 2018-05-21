#include<iostream>
using namespace std;
class Example
{
  private:
  int a,b;
  public:
  void display()
  {
      cout<<"Enter the  2 number"<<endl;
     cin>>a;
     cin>>b;
      cout<<a<<b;
  }
      
   
};
int main()
{
    Example e;
    e.display();
    return 0;
}
