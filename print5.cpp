#include <iostream>

using namespace std;
class Print5
{
    private:
    int n,i,a[10000];
    public:
    void get()
    {
        cout<<"enter the value of n";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            a[i]=i*5;
            cout<<a[i]<<"\t";
        }
    }
};

int main()
{
  Print5 p;
 p.get();

 }
