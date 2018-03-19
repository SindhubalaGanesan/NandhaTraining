#include <iostream>
using namespace std;
class Example
{
  private:
  int a,i,c=0,rem[100];
  public:
  void display()
  {
      cout<<"Enter the number"<<endl;
      cin>>a;
      while(a>0)
      {
          rem[c]=a%10;
          a=a/10;
          c++;
      }
      for(c=c-1;c>=0;c--)
      {
          if(rem[c]%2==1)
          {
          cout<<"\t"<<rem[c];
          }
          
      }
  }
};

int main()
{
    Example e;
    e.display();

    return 0;
}
