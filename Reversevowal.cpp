#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    private:
    char a[50];
    int j,i,b;
    public:
    void display()
    {
        cout<<"enter the string"<<endl;
        cin>>a;
        b=strlen(a);
        for(i=0;i<b;i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            {
              for(j=i;j<b;j++)
              {
                  a[j]=a[j+1];
              }
              b--;
            }
        }
            for(i=0;i<b;i++)
            {
                for(j=i+1;j<b;j++)
                {
                   int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                cout<<a[i];
            }
    }
       
};
int main()
{
    Example e;
    e.display();
    return 0;
}
