
#include<iostream>
using namespace std;
class Example
{
  private:
  string s;
  char a;
  public:
  void display()
  {
      cout<<"enter the string and character:"<<endl;
      cin>>s;
      cin>>a;
      int z=s.length();
      for(int i=1;i<=z;i++)
      {
          if(s[i]==a)
          {
              cout<<i;
              break;
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
