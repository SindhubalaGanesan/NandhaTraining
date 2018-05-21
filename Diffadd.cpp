#include<iostream>
using namespace std;
class Example
{
    private:
    int n,a,d,sum=0,i;
    public:
    void display()
    {
        cout<<"Enter the first term"<<endl;
        cin>>a;
        cout<<"Enter the difference"<<endl;
        cin>>d;
        cout<<"Enter the no of terms"<<endl;
        cin>>n;
        for(i=0;i<n;i++)
        {
            sum=sum+(a+i*d);
        }
        cout<<"The redul is:"<<sum<<endl;
    }
};
int main()
{
  Example x;
  x.display();
  return 0;
}
