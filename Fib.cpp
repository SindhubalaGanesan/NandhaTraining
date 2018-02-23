
#include <iostream>

using namespace std;
class Fib
{
    private:
    int a=-1,b=1,c,i,d;
    public:
    void display()
    {    
        cout<<"Enter the number:"<<endl;
        cin>>d;
      for(i=0;i<d;i++)
      {
          c=a+b;
          cout<<c<<"\t";
          a=b;
          b=c;
      }
    
    }
};

int main()
{
   Fib f;
    f.display();

    return 0;
}
