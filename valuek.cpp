#include <iostream>
using namespace std;
class Samnum
{
    private:
    int a[50],i,n,k;
    public:
    void display()
    {
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        
    }
    cout<<"The result is :\t"<<a[k];
}
};
    



int main()
{
    Samnum e;
    e.display();

    return 0;
}
