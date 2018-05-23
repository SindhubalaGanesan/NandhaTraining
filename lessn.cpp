
#include<iostream>
using namespace std;
class Example
{
  private:
  int n,i;
  public:
  void display()
  {
      cout<<"enter the number:"<<endl;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(i=0;i<n;i++)
      {
          if(a[i]<n)
          {
              cout<<a[i]<<"\t";
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
