#include <iostream>

using namespace std;
 class Largest
 {
 private:
 int i,a,b[100],small;
 public:
 void get()
 {
     cout<<"Enter the number";
     cin>>a;
     for(i=0;i<a;i++)
     {
         cin>>b[i];
     }
     small=b[0];
     for(i=0;i<a;i++)
     {
         if(small>b[i])
         {
             small=b[i];
         }
     }
     cout<<small;
 }
 };
 

int main()
{
    Largest l;
    l.get();
    return 0;
}
