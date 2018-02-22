#include <iostream>

using namespace std;
class Sample
{
  private:
  int a,count=0;  
  public:
  void display()
  {
      cout<<"Enter the number:"<<endl;
      cin>>a;
      if(a<10000000)
      {
      while(a!=0)
      {
          a=a/10;
          count++;
      }
      cout<<"The count is:"<<count;
      }
      else
      {
          cout<<"Enter upto 10000000"<<endl;
      }
      
  }
};

int main()
{
     Sample s;
     s.display();

    return 0;
}

