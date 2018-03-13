#include <iostream>
#include<string.h>
using namespace std;
class Example
{
  private:
  char a[100];
  int i,s;
  public:
   void display()
  {
      cout<<"Enter the string:"<<endl;
      cin>>a;
      s=strlen(a);
      for(i=0;i<s;i++)
      {
          if(a[i]>='0'&&a[i]<='9')
          {
              cout<<a[i];
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
