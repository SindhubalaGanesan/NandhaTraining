#include <iostream>

using namespace std;
class Sum
{
    private:
    int n,count=0 ;
    public:
    void get()
    {
        cout<<"Enter the number";
        cin>>n;
        while(n!=0)
        {
          n=n/10;
          count++;
        }
     cout<<"number of digit"<<count;
        
    }
    };

int main()
{
  Sum s;
  s.get();
  
}
