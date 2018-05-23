#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    string a;
    public:
    void display()
    {
        cout<<"enter the day:"<<endl;
        cin>>a;
        if(a=="saturday"||a=="sunday"||a=="Saturday"||a=="Sunday")
        {
            cout<<"Yes,It is holiday";
        }
        else
        {
            cout<<"No,It is not holiday";
        }
    }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
