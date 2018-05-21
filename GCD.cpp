#include<iostream>
using namespace std;
class Example
{
  private:
  int a,b,gcd,i;
  public:
  void display()
  {
      cout<<"Enter the  2 number"<<endl;
     cin>>a;
     cin>>b;
     for(i=1;i<=a&&i<=b;i++)
     {
         if(a%i==0&&b%i==0)
         {
             gcd=i;
         }
     }
     cout<<gcd;
  }
      
   
};
int main()
{
    Example e;
    e.display();
    return 0;
}
