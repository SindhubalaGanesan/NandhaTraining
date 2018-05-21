#include<iostream>
using namespace std;
class Example
{
  private:
  int num,a=1,p=2,i;
  public:
  void display()
  {
      cout<<"Enter the num"<<endl;
      cin>>num;
      for(i=1;i<=num;i++)
      {
          a=a*p;
      
      if(a==num)
      {
          cout<<"yes";
          break;
          
      }
      }
    if(a!=num)
      {
          cout<<"no";
          
      }
      
  }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
