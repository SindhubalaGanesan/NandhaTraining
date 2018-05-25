#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    int a,i,j;
    public:
    void display()
    {
        cout<<"Enter the number:";
        cin>>a;
        for(i=0;i<a;i++)
        {
            cout<<"\n";
            for(j=0;j<a-i;j++)
            {
                cout<<"1"<<"\t";
            }
        }
    }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
