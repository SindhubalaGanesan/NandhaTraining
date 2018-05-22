#include<iostream>
using namespace std;
class Example
{
    private:
    int n,a,d,s;
    public:
    void display()
    {
        cout<<"Enter the numbers";
        cin>>n>>a>>d;
      s = (n* ((2*a) + ((n -1) *d) ))/2;
        cout<<s;
    }
};
int main()
{
    Example e;
    e.display();
}
