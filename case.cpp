#include<iostream>
using namespace std;
class Example
{
  private:
  string s,t;
  int count=0;
  public:
  void display()
  {
      cout<<"enter the two string"<<endl;
      cin>>s;
      cin>>t;
     int a=s.length();
     int b=t.length();
      if(a==b)
      {
      for(int i=0;i<a;i++)
      {
          if(s[i]==t[i])
          {
            count=count+1;  
          }
      }
          
      }
      
      if(count==a)
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
