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
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                cout<<i<<"\t";
            }
        }
    }
};
int main()
{
   Fact f;
   f.display();
   return 0;
}
