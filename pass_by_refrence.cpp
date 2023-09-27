//Pointers Pass by reference method
#include <iostream>

using namespace std;

void swap_by_reference(int &x,int &y)
{
    x = x * y;
    y = x / y;
    x = x / y;
}
int main()
{
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;
    cout<<"Before swapping: "<<"a = "<<a<<",b = "<<b<<endl;
    swap_by_reference(a,b);
    cout<<"After swapping: "<<"a = "<<a<<",b = "<<b<<endl;
    return 0;
}