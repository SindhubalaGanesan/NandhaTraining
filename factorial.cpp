#include <iostream>

using namespace std;
class Factorial
{
    private:
    int n,i,f=1;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        cout<<"The output is :"<<f;
        
    }
};

int main()
{
 Factorial s;
 s.get();

 }

