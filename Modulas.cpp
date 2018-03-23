#include<iostream>
using namespace std;
class Example
{
   private:
   int x,y,z,c;
   public:
   void display()
   {
       cout<<"Enter the x,y,z"<<endl;
       cin>>x>>y>>z;
       c=(x*y)%z;
       cout<<"The answer is:"<<c;
       
   }
};
int main()
{
    Example e;
    e.display();
    
}
