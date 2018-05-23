
#include<iostream>
using namespace std;
class Example
{
  private:
  int n,i,k;
  public:
  void display()
  {
      cout<<"enter the value of k and n:"<<endl;
      cin>>n;
      int a[n];
      cin>>k;
      for(i=0;i<n;i++)
      {
         cin>>a[i];
      }
      for(i=0;i<n-k;i++)
      {
          cout<<a[i]<<"\t";
      }
          
      
  }
       
};
int main()
{
    Example e;
    e.display();
     return 0;
}

