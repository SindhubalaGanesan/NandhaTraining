
#include <iostream>

using namespace std;
class Prime
{
    private:
    int n,i,count;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>n;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            cout<<"It is prime number"<<endl;
        }
        else
        {
            cout<<"It is not prime";
        }
    }
       
};

int main()
{
  Prime p;
  p.get();
  
}

