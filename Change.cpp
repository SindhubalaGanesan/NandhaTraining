#include<iostream>
using namespace std;
class Change
{
    private:
    int n,a[100],i;
    public:
    void display()
    {
        cout<<"Enter the number";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]!=i)
            {
                cout<<i;
            }
        }
    }
};
int main()
{
  Change c;
  c.display();
  return 0;
}
