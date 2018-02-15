
#include <iostream>

using namespace std;
class Print5
{
    private:
    int n,i,a[5];
    public:
    void get()
    {
        cout<<"enter the value of n";
        cin>>n;
        for(i=1;i<=5;i++)
        {
            a[i]=i*n;
            cout<<a[i]<<"\t";
        }
    }
};

int main()
{
  Print5 p;
 p.get();

 }
