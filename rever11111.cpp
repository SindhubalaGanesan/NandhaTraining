#include<iostream>
using namespace std;
class Example
{
    private:
    int x,rem,sum=0;
    public:
    void display()
    {
        cout<<"Enter the number";
     cin>>x;
     if(x<10000)
     {
while(x!=0)
{
rem=x%10;
sum=sum+(rem*rem);
x=x/10;
}
cout<<sum;
}

else
{
    cout<<"enter only less than 10000";
}
}
};
int main()
{
Example e;
e.display();

}
