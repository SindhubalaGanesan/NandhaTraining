#include <iostream>
#include<string.h>
using namespace std;
class Last
{
    private:
    char a[100];
    int i,s,b,c;
    public:
    void display()
    {
        cout<<"Enter the string"<<endl;
        cin>>a;
        cin>>b;
        s=strlen(a);
        c=s-b;
        for(i=c;i<=s;i++)
        {
            cout<<a[i];
        }
        
    }
};

int main()
{
   Last l;
   l.display();
    return 0;
}
