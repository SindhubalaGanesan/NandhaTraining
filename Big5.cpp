#include <iostream>

using namespace std;
class Big5
{
    private:
    int a,b[10];
    public:
    void display()
    {    int temp;
        cout<<"Enter the number:"<<endl;
        int max=b[0];
        for(a=0;a<10;a++)
        {
            cin>>b[a];
            if(max<b[a])
            {
                max=b[a];
            }
        }
        cout<<"The biggest number is:"<<max;
      
    
    }
};

int main()
{
    Big b;
    b.display();

    return 0;
}
