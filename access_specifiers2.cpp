//Access specifiers
#include <iostream>

using namespace std;

class A 
{
  string str;
  public:
  void print_name(string name)
  {
      str = name;
      cout<<"Name: "<<str<<endl;
  }
};


int main()
{
    A obj1;
    obj1.print_name("Tejaswini");
  
    return 0;
}