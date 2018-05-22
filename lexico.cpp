#include<iostream>
#include<string.h>
using namespace std;
 class Example
 {
     private:
    char a[100];
    int i,b,j,temp;
     public:
     void display()
     {
    cout<<"Enter the string :";
    cin>>a;
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<b;i++)
    {
    cout<<a[i];
    }
     }
 };
int main()
{ 
  Example e;
  e.display();
   
}
