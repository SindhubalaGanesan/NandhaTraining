#include<iostream>
using namespace std;
class Example
{
    private:
    int n,k,i,x,count=0;
    public:
    void display()
    {
        cout<<"Enter the number"<<endl;
        cin>>n;
        cout<<"Enter the k value"<<endl;
        cin>>k;
        int a[n];
        if(n<1000000000000000)
        {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
           if(k==a[i])
           {
               count++;
           }
           
        }
        if(count==1)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"No";
        }
        }
        else
        {
            cout<<"Enter only less than 1000000000000000"<<endl;
        }
        
    }
    };
    int main()
    {
        Example e;
        e.display();
        return 0;
    }
