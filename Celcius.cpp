#include <iostream>
#include<string.h>
using namespace std;
class Sample
{
  private:
  int cel,kel;
  public:
  void display()
  {
      cout<<"Enter the temperature in celcius"<<endl;
      cin>>cel;
      kel=cel+273;
      cout<<"Temperature in Kelvin:\t"<<kel;
  }
};

int main()
{
    Sample s;
    s.display();
    

    return 0;
}
