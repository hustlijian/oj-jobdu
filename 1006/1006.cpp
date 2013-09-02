#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  while(cin>>s)
  {
      size_t posz=s.find('z');
      size_t posj=s.find('j');
      int a=posz,b=posj-posz-1,c=s.size()-posj-1;
      if(a*b==c&&b>=1)
             cout<<"Accepted"<<endl;
      else
             cout<<"Wrong Answer"<<endl;
   }
   return 0;
}