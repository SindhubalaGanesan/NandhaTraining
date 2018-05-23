#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    char s[100];
   char d;
    int i,count=1,j,x=1;
    public:
    void display()
    {
        int a=strlen(s);
        cout<<"Enter the string"<<endl;
        cin>>s;
         
        for(i=0;i<a;i++)
        {
            for(j=i+1;j<a;j++)
            {
                if(s[i]==s[j])
                
                 count++;
            
            if(count>x)
            {
                x=count;
                d=s[i];
            }
            }
            
        }
            cout<<d;
        
    }
       
};
int main()
{
    Example e;
    e.display();
    return 0;
}
