#include <iostream>
#include<string.h>
using namespace std;
class Sample
{
  private:
  int a[100],i,n,sum=0;
  public:
  void sample1()
  {
      cout<<"Enter the K value"<<endl;
      cin>>n;
      cout<<"Enter the n values"<<endl;
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      for(i=0;i<n;i++)
      {
          sum=sum+a[i];
      }
      cout<<"The answer is:\t"<<sum;
      }
  
};

int main()
{
    Sample s;
    s.sample1();
    

    return 0;
}
