#include <iostream>

using namespace std;
class Swap
{
    private:
    int a,b;
    public:
    void display()
    {    int temp;
        cout<<"Enter the number:"<<endl;
        cin>>a>>b;
      
        if(a<100000&&b<100000)
        {
        temp=a;
        a=b;
        b=temp;
        cout<<"After swapping:"<<endl;
         cout<<"a="<<a<<"b="<<b<<endl;
        }
        else
        {
            cout<<"Enter the input upto 100000"<<endl;
        }
    }
};

int main()
{
    Swap s;
    s.display();

    return 0;
}
