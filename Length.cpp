#include<iostream>
using namespace std;
class Example
{
   private:
   int l,b,h,c;
   public:
   void display()
   {
       cout<<"Enter the length,breath,height"<<endl;
       cin>>l>>b>>h;
       c=l*b*h;
       cout<<"The answer is:"<<c;
       
   }
};
int main()
{
    Example e;
    e.display();
    
}
