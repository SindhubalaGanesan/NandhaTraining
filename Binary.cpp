#include <iostream>
#include<string.h>
using namespace std;
class Count
{
    private:
    char a[100];
    int count=0,s,i;
    public:
    void fun()
    {
  cout<<"Enter the string";
  cin>>a;
  s=strlen(a);
  for(i=0;i<s;i++)
  {
      if((a[i]=='0')||(a[i]=='1'))
      {
          count++;
      }
  }
 if(count==s)
 {
     cout<<"Yes"<<endl;
 }
 else
 {
     cout<<"No"<<endl;
 }
    }
  
};

int main()
{
    Count c;
    c.fun();

    return 0;
}
