#include<iostream>
using namespace std;
class Example
{
    private:
    int num;
    public:
    void display()
    {
        cout<<"Enter the num"<<endl;
        cin>>num;
        if(num<10000)
        {
        while(num!=0)
        {
            if(num%10==0)
            {
                cout<<num;
                break;
            }
            num++;
        }
        }
        else
        {
            cout<<"Enter the num less than 10000"<<endl;
        }
    }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
