#include<iostream>
using namespace std;
class Example
{
  private:
  int n,k,i,count=0;
  public:
  void display()
  {
      cout<<"Enter the num"<<endl;
      cin>>n;
      cout<<"Enter the k value"<<endl;
      cin>>k;
      int a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(i=0;i<n;i++)
      {
          if(a[i]%2==1)
          {
             count++;
          }
      
      if(count==k)
      {
          cout<<a[i];
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
