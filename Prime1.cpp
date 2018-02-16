

#include <iostream>

using namespace std;
class Prime
{
    private:
    int i,a,b,count=0,j;
    public:
    void get()
    {
        cout<<"enter your number";
        cin>>a;
        cin>>b;
        for(i=a;i<=b;i++)
        {
            count=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    count++;
                    break;
                    
                }
            }
            if(count==0&&i!=1)
            
                cout<<"The output is"<<i<<"\t";
            
        }
    
    }
};

int main()
{
    Prime p;
    p.get();

    return 0;
}
