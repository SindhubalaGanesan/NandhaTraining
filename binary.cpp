#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    int n,i=0,c=0;
    public:
    void display()
    {
        cout<<"enter the number:"<<endl;
        cin>>n;
        int a[n];
        while(n!=0)
        {
            a[i]=n%2;
            n=n/2;
            i++;
            c=c+1;
        }
        for(i=c-1;i>=0;i--)
        {
            cout<<a[i];
        }
        
    }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
