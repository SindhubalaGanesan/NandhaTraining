#include <iostream>
using namespace std;
class Sample2
{
    private:
    int a,b,c;
    char d;
    public:
    void display()
    {
        cout<<"Enter the number"<<endl;
        cin>>a>>d>>b;
        if(d=='/')
        {
            c=a/b;
            cout<<c;
        }
        else
        {
            c=a%b;
            cout<<c;
        }
        }
        
};

int main()
{
    Sample2 s;
    s.display();

    return 0;
}
