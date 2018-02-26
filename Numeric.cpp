
#include <iostream>

using namespace std;
 class Numeric 
 {
     private:
     char i;
     public:
     void get()
     {
         cout<<"Enter the input:"<<endl;
         cin>>i;
         if(i>='0'&&i<='9')
         {
             cout<<"Yes,It is numeric"<<endl;
         }
         else
         {
             cout<<"No,It is not numberic"<<endl;
         }
    
     }
     
 };

int main()
{
   Numeric n;
   n.get();
       return 0;
}

