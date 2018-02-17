
#include <iostream>

using namespace std;
 class Largest
 {
 private:
 int i,a,b[100],big;
 public:
 void get()
 {
     cout<<"Enter the number";
     cin>>a;
     for(i=0;i<a;i++)
     {
         cin>>b[i];
     }
     big=b[0];
     for(i=0;i<a;i++)
     {
         if(big<b[i])
         {
             big=b[i];
         }
     }
     cout<<"The maximum number in array "<<big<<endl;
 }
 };
 

int main()
{
    Largest l;
    l.get();
    return 0;
}
