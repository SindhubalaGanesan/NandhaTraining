#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    string s;
    int count=0;
    public:
    void display()
    {
        cout<<"enter the string";
        cin>>s;
        for(int i=0;s[i]!='\0';i++)
        {
            count++;
        }
    cout<<count;
    }
    
       
};
int main()
{
    Example e;
    e.display();
    return 0;
}
