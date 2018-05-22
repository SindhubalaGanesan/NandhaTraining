#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    char a[50],i,j,count=0,c;
    public:
    void display()
    {
        cout<<"Enter the string"<<endl;
        cin>>a;
        c=strlen(a);
       for(i=0;i<c;i++)
        {
            for(j=i+1;j<c;j++)
            {
            if(a[i]==a[j])
            {
                count++;
            }
            
        }
        }
        if(count==0)
        {
            cout<<"It is isogram";
        }
        else
        {
            cout<<"It is not isogram";
        }
    }  
};
int main()
{
    Example e;
    e.display();
    return 0;
}
