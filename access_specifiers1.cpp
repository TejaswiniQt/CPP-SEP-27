//Access specifiers
#include <iostream>

using namespace std;

class A 
{
  public:
  string str;
  void print_name()
  {
      cout<<"Name: "<<str<<endl;
  }
};


int main()
{
    A obj1;
    obj1.str = "Tejaswini";
    obj1.print_name();
  
    return 0;
}