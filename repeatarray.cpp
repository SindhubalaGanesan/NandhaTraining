#include<iostream>
using namespace std;
class Example
{
    private:
    int i,j,a[10],a1[10],c=0,n;
    public:
    void display()
    {
        cout<<"enter the n:"<<endl;
        cin>>n;
        cout<<"Enter the numbers:"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    a1[c]=a[i];
                    c++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
           int x=0;
            for(j=0;j<c;j++)
            {
                if(a[i]==a1[j])
                {
                    x++;
                }
            }
            if(x==0)
            {
                cout<<a[i];
            }
        }
    }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
