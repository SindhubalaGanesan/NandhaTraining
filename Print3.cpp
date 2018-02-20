
#include <iostream>

using namespace std;
class Print3
{
    private:
    int k,i;
    string s;
    public:
    void display()
    {
        cout<<"enter the string:"<<endl;
        cin>>s;
        cout<<"Enter the number:"<<endl;
        cin>>k;
        for(i=0;i<k;i++)
        {
            cout<<s<<endl;
        }
    }
        };
    


int main()
{
   Print3 s;
   s.display();
    
}
