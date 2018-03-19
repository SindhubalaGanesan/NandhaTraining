#include <iostream>

#include<string.h>

using namespace std;

class Sample1

{

 private:

 char a[50];

 int c=0,i,s;

 public:

 void display()

 {

     cout<<"enter the string"<<endl;

     cin>>a;

     s=strlen(a);

     for(i=0;i<s;i++)

     {

     if(a[i]>='0'&&a[i]<='9')

     {

         c++;

     }

     }

     if(c==s)

     {

         cout<<"yes"<<endl;

     }

     else

     {

         cout<<"no"<<endl;

     }

     

 }

};

int main()

{

   Sample1 s;

   s.display();



    return 0;

}
