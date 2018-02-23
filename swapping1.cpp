
#include <iostream>

using namespace std;
class Swap
{
    private:
    int a,b;
    public:
    void display()
    {
        cout<<"Enter the number:"<<endl;
        cin>>a>>b;
        cout<<"Before swapping:"<<endl;
        cout<<"a="<<a<<"b="<<b<<endl;
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"After swapping:"<<endl;
         cout<<"a="<<a<<"b="<<b<<endl;
    }
};

int main()
{
    Swap s;
    s.display();

    return 0;
}
