#include <iostream>
using namespace std;
class Divide2
{
    private:
    int a,b;
    public:
    void display()
    {
        cout<<"Enter the number"<<endl;
        cin>>a;
        if(a%2==0)
        {
            b=a/2;
            cout<<"The result is:"<<b;
        }
        else
        {
            cout<<"The result is:"<<a;
        }
    }
};

int main()
{
   Divide2 d;
   d.display();
    return 0;
}
