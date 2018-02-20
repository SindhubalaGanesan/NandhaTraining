#include <iostream>
using namespace std;
class Average
{
  private:
  int n,c,i,sum=0,avg;
  public:
  void display()
  {
      cout<<"Enter the number"<<endl;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          sum=sum+a[i];
      }
      avg=sum/n;
      cout<<avg;
      
  }
};

int main()
{
    Average s;
    s.display();
}



