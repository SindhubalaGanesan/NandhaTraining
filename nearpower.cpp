#include<iostream>
#include<string.h>
using namespace std;
 class Example
 {
     private:
     int a,b;
     public:
     void display()
     {
    cout<<"Enter the number :";
    cin>>a;
    b = a/2;
    b=b*4;
    cout<<b;
     }
     
 };
int main()
{ 
  Example e;
  e.display();
   
}
