#include<iostream>
#include<string.h>
using namespace std;
 class Example
 {
     private:
    char a[100];
    int i,b;
     public:
     void display()
     {
    cout<<"Enter the string :";
    cin>>a;
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(i%2==0)
        {
            cout<<a[i];
        }
    }
    cout<<"\t";
    for(i=0;i<b;i++)
    {
        if(i%2==1)
        {
            cout<<a[i];
        }
    }
     }
     
 };
int main()
{ 
  Example e;
  e.display();
   
}
