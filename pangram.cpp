#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    string s;
    int m[26]={0},a=0;
    public:
    void display()
    {
        cout<<"Enter the string:";
        getline(cin,s);
       
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                a=a+!m[s[i]-'a'];
                m[s[i]-'a']=1;
            }
           else if(s[i]>='A'&&s[i]<='Z')
            {
                a=a+!m[s[i]-'A'];
                m[s[i]-'A']=1;
            }
        }
        if(a==26)
        {
            cout<<"It is pangram string";
        }
        else
        {
            cout<<"It is not pangram string";
        }
    }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
