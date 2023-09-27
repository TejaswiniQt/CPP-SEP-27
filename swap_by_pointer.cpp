//Pointers Pass by pointer method
#include <iostream>

using namespace std;

void swap_by_pointer(int *a,int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;
    cout<<"Before swapping: "<<"a = "<<a<<",b = "<<b<<endl;
    swap_by_pointer(&a,&b);
    cout<<"After swapping: "<<"a = "<<a<<",b = "<<b<<endl;
    return 0;
}