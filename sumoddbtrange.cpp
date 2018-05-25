#include<iostream>
#include<string.h>
using namespace std;
class Example
{
   private:
   int a,x[20],sum=0,d,b=0,c=0;
   public:
   void display()
   {
       cout<<"enter the range :"<<endl;
       cin>>a>>d;
       for(int i=a;i<=d;i++)
       {
           if(i%2!=0)
           {
               x[b]=i;
               b++;
               c=c+1;
           }
       }
       for(b=0;b<c;b++)
       {
           sum=sum+x[b];
       }
     cout<<sum;     
   }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
