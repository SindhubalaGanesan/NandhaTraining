
#include <iostream>
using namespace std;
class Example
{
    private:
    int n,count=0,i;
    public:
    int  display()
    {
    
        cout<<"enter the number:";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
             cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==i)
            {
                cout<<a[i]<<"\t";
                count++;
                
            }
            }
      
       if(count==0)
       {
           cout<<"-1";
       }
    }
    
        
};

int main()
{
    Example e;
    e.display();

    return 0;
}
