
#include <iostream>

using namespace std;
  class Index
  {
    
    private:
    int i,a[100],c;
    public:
    void display()
    {
        cout<<"Enter your number";
        cin>>c;
        for(i=0;i<c;i++)
        {
            cin>>a[i];
        }
        cout<<"The number is :"<<endl;
        for(i=0;i<c;i++)
        {
            cout<<a[i]<<"\t"<<i<<endl;
        }
    }
  };
 

int main()
{
    Index i;
    i.display();
    return 0;
}
