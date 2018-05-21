#include<iostream>
using namespace std;
class Fact
{
    private:
    int n,i;
    public:
    void display()
    {
        cout<<"Enter the number"<<endl;
        cin>>n;
        cout<<"The answer is:"<<endl;
        if(n<1000)
        {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                cout<<i<<"\t";
            }
        }
        }
        else
        {
            cout<<"Enter only less than 1000"<<endl;
        }
        
    }
};
int main()
{
   Fact f;
   f.display();
   return 0;
}
