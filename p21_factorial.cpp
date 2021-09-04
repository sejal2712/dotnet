//Program: 21-“Program to calculate the factorial of an integer”
#include<iostream>
using namespace std;

int main()
{
    long double f=1,n;
    cout<<"enter no. = ";
    cin>>n;
    for(int i=2;i<=n;i++)
    f*=i;
    cout<<"factorial = "<<f<<endl;
    return 0;
}
    
