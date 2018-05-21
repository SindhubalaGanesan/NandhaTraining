#include<iostream>
using namespace std;
class Example
{
  private:
  int a,b,max;
  public:
  void display()
  {
      cout<<"enter the number";
      cin>>a>>b;
      if(a>b)
      {
          max=a;
      }
      else
      {
          max=b;
      }
      while(1)
      {
          if(max%a==0&&max%b==0)
          {
              cout<<max;
              break;
          }
          max++;
      }
      
  }
   
};
int main()
{
    Example e;
    e.display();
    return 0;
}
