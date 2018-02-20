#include <iostream>

using namespace std;
class Max
{
    private:
   int i,a[10],big;
    
    public:
    void get()
    {
        cout<<"Enter the number:"<<endl;
        big=a[0];
        for(i=0;i<10;i++)
        {
            cin>>a[i];
            if(big<a[i])
            {
                big=a[i];
            }
        }
        cout<<big;
    }
};

int main()
{
  
    Max m;
    m.get();
}
