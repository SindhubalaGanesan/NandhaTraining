
#include <iostream>
using namespace std;
class Example
{
    private:
    int n,i,sum=0,j;
    public:
    void display()
    {
        cout<<"Enter the number"<<endl;
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                  sum=sum+a[i][j];  
                }
            }
        }
        cout<<sum;
    }
};

int main()
{
    Example e;
    e.display();

    return 0;
}
