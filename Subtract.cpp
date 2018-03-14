#include <iostream>
using namespace std;
class Subtract
{
  private:
  int a,b,c;
  public:
  void display()
  {
      cout<<"Enter the two inputs";
      cin>>a>>b;
      if(a<b)
      {
         c=b-a;
         cout<<"The result is\t"<<c;
        
      }
      else
      {
          cout<<"a is greater than b"<<endl;
      }
  }
};

int main()
{
   Subtract s;
   s.display();
    return 0;
}
