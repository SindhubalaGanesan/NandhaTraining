#include<iostream>
#include<string.h>
using namespace std;
class Example
{
   private:
   int a,c=0,b=0,x[20],count=0;
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
       for(c=b-1;c>=0;c--)
       {
         for(int j=c+1;j<b;j++)
         {
             if(x[c]==x[j])
             {
                 count++;
             }
         }
       }
       if(count>0)
       {
           cout<<"yes"<<endl;
           }
           else
           {
               cout<<"no"<<endl;
           }
          
   }
};
int main()
{
    Example e;
    e.display();
    return 0;
}
