#include<iostream>
#include<string.h>
using namespace std;
class Example
{
   private:
   int a,c=0,b=0,x[20],sum;
   public:
   void display()
   {
       cout<<"enter the number:";
       cin>>a;
       while(a!=0)
       {
        x[c]=a%10;
        c++;
        b++;
        a=a/10;
       }
       
         sum=x[0]+x[c-1];
         cout<<sum;
          
   }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
