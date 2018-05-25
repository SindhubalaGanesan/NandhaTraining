#include<iostream>
#include<string.h>
using namespace std;
class Example
{
  private:
  string s;
  int i,count=0,k;
  public:
  void display()
  {
      cout<<"Enter the value of N and K:"<<endl;
      cin>>s;
      cin>>k;
      int a=s.length();
      for(i=0;i<a;i++)
      {
          if(s[i]>=0||s[i]<=k)
          {
              count++;
          }
      }
      if(count==a)
      {
          cout<<"Yes";
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
