//Program: 33-“Program to demonstrate the unary operators, prefix and postfix modes.”
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter a and b: ";
    cin>>a>>b;
    a=a++; //postfix mode
    b=++b; //prefix mode
    cout<<"now a = "<<a<<"\t"<<"now b = "<<b;
    
    return 0;
}
