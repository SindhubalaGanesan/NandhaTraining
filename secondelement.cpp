
#include<iostream>
using namespace std;
class Example
{
  private:
  int n,i;
   public:
  void display()
  {
  cout<<"Enter the numbers"<<endl;
  cin>>n;
  int a[n];
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }    
 for(i=0;i<n;i++)
 {
     for(int j=i+1;j<n;j++)
     {
         if(a[i]>a[j])
         {
             int temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }
 }
 cout<<a[1];
  }
       
};

int main()
{
    Example e;
    e.display();
    
    return 0;
}
