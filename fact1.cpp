#include <iostream>

using namespace std;

int main()
{
    int a,i,facto=1;
    cout<<"enter the number"<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        facto=facto*i;
    }
    cout<<"The answer is:\t"<<facto;
}



