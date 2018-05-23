
#include<iostream>
using namespace std;
class Example
{
  private:
  string s;
  char a;
  int count=0;
  public:
  void display()
  {
      cout<<"enter the string and character:"<<endl;
      cin>>s;
      cin>>a;
     int f=s.length();
    for(int i=0;i<f;i++)
    {
        if(s[i]==a)
        {
            count++;
        }
    }
    cout<<count;
    
       }
};

int main()
{
    Example e;
    e.display();
    
    return 0;
}
