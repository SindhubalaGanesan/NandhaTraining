
#include<iostream>
using namespace std;
class Example
{
  private:
  int n,i,f=1;
  public:
  void display()
  {
      cout<<"enter the number:"<<endl;
      cin>>n;
      if(n<=25)
      {
      for(i=1;i<=n;i++)
      {
          f=f*i;
      }
      cout<<f;
      }
      else
      {
          cout<<"only enter less than 25"<<endl;
      }
          
      
  }
       
};
int main()
{
    Example e;
    e.display();
     return 0;
}
