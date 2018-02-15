
#include <iostream>

using namespace std;
class Amstrong
{
    private:
    int i,a,n,sum=0,r;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>i;
        n=i;
 while(i!=0)
 {
     r=i%10;
     a=r*r*r;
     sum=sum+a;
     i=i/10;
     
 }
 if(n==sum)
 {
     cout<<"It is amstrong";
 }
 else
 {
     cout<<"It is not amstrong";
 }
}
};

int main()
{
 Amstrong a;
 a.get();
 }
