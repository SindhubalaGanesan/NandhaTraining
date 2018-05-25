#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    string s;
    char s1[100];
    int a,i,j,c=0;
    public:
    void display()
    {
        cout<<"enter the string:"<<endl;
        cin>>s;
        a=s.length();
        for(i=0;i<a;i++)
        {
            for(j=i+1;j<a;j++)
            {
               if(s[i]==s[j])
               {
                   s1[i]=s[i];
                   c++;
               }
            }
        }
        for(i=0;i<a;i++)
        {
            int z=0;
            for(j=0;j<c;j++)
            {
                if(s[i]==s1[j])
                {
                    z++;
                }
            }
            if(z==0)
            {
                cout<<s[i];
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
