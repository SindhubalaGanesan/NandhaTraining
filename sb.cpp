#include <iostream>

using namespace std;
class Sample
{
  private:
  int a,small,big,i;  
  public:
  void display()
  {
      cout<<"Enter the number";
      cin>>a;
      int s[a];
     
      for(i=0;i<a;i++)
      {
          cin>>s[i];
      }
      small=s[0];
          for(i=0;i<a;i++)
          {
          if(small>s[i])
          {
              small=s[i];
          }
          }
          big=s[0];
          for(i=0;i<a;i++)
          {
          if(big<s[i])
          {
              big=s[i];
          }
         
      }
      cout<<"The smallest number:"<<small<<endl;
      cout<<"The biggest number:"<<big<<endl;
  }
};

int main()
{
     Sample s;
     s.display();

    return 0;
}

