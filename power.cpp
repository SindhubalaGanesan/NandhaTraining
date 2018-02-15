
#include <iostream>

using namespace std;
class Sum
{
    private:
    int n,a,c=1,i;
    public:
    void get()
    {
        cout<<"Enter the two numbers";
        cin>>n;
        cin>>a;
        for(i=1;i<=a;i++)
        {
            c=c*n;
        }
        cout<<c;
    }
        
};

int main()
{
  Sum s;
  s.get();
  
}
