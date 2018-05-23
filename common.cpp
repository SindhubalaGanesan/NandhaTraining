#include<iostream>
using namespace std;
class Example
{
  private:
  string s, a;
  int count=0,flag;
  public:
  void display()
  {
      cout<<"enter the strings:"<<endl;
      cin>>s;
      cin>>a;
     int f=s.length();
     int h=a.length();
     if(f==h)
     {
    for(int i=0;i<f;i++)
    {
        if(s[i]==a[i])
        {
              flag=0;
        }
    }
     }
    if(flag==0)
    {
        cout<<"yes";
    }
    else
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
