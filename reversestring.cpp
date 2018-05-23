#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    char a[30];
    int i,b;
    public:
    void display()
    {
        cout<<"enter the string"<<endl;
        cin>>a;
        b=strlen(a);
        for(i=b;i>=0;i--)
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
