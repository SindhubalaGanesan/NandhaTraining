#include<iostream>
using namespace std;
class Reverse
{
   private:
   int a,i,sum=0,re;
   public:
   void display()
   {
       cout<<"Enter the number"<<endl;
       cin>>a;
       while(a!=0)
       {
           re=a%10;
           sum=sum*10+re;
           a=a/10;
       }
       cout<<"The reversed number is:"<<sum;
   }
   
   
   
};
int main()
{
    Reverse r;
    r.display();
    
}
