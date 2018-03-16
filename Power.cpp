#include <iostream>
using namespace std;
class D2
{
    private:
    int a;
    public:
    void display()
    {
       cout<<"Enter the number"<<endl;
        cin>>a;
        if(a%2==0)
        {
            cout<<"Yes, It is power of 2"<<endl;
        }
        else
        {
            cout<<"NO,It is not power of 2"<<endl;
        }
    } 
};

int main()
{
   D2 d;
   d.display();
    return 0;
}
