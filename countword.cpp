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
      if(a[i]=' ')
      {
          count++;
      }
  }
  cout<<"The number of words in string:\t"<<count+1<<endl;
      }
  
};

int main()
{
    Count c;
    c.fun();

    return 0;
}
