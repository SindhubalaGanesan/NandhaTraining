
#include <iostream>
using namespace std;
class Example
{
  private:
 int n,i,sum=0;
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
         if(a[i]<=0)
         {
            sum=sum+a[i];
         }
        
     }
     cout<<sum;
     
 }
};

int main()
{
 Example e;
 e.display();

    return 0;
}
