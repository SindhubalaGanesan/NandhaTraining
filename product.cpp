
#include <iostream>

using namespace std;
class Sample
{
  private:
  int a,b,c;
  public:
  void display()
  {
      cout<<"Enter the number:"<<endl;
      cin>>a>>b;
      c=a*b;
      if(c%2==0)
      {
      cout<<"It is even"<<"\t"<<c;
      }
      else
      {
          cout<<"It is odd"<<"\t"<<c;
      }
     
  }
};

int main()
{
     Sample s;
     s.display();

    return 0;
}
