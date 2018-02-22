
#include <iostream>

using namespace std;
class Sample
{
  private:
  int a,count=0,r;  
  public:
  void display()
  {
      cout<<"Enter the number:"<<endl;
      cin>>a;
      while(a!=0)
      {
          r=a%10;
          count=count+r;
          a=a/10;
      }
      cout<<"The sum is:"<<count;
     
  }
};

int main()
{
     Sample s;
     s.display();

    return 0;
}
