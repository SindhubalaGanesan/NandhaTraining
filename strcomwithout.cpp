#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    char a[50],b[50],c,d,i;
    public:
    void display()
    {
        cout<<"Enter the string"<<endl;
        cin>>a;
        cin>>b;
        c=strlen(a);
        d=strlen(b);
        if(c==d)
        {
        for(i=0;i<c||i<d;i++)
        {
            if(a[i]>b[i])
            {
                cout<<a[i];
            }
            else if(a[i]<b[i])
            {
                cout<<b[i];
            }
            else
            {
                cout<<a[i];
            }
        }
        }
        else
        {
            cout<<"The string length is not equal";
        }
    }  
    
};
int main()
{
    Example e;
    e.display();
    return 0;
}
