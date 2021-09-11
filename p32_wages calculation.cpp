//Program: 32-“A program to calculating the total amount of money earned in n day.”
#include <iostream>
using namespace std;

int main()
{
    int n,s,total;
    cout<<"enter the number of days of working: ";
    cin>>n;
    cout<<"\nenter the salary of 1 day: ";
    cin>>s;
    total=n*s;
    cout<<"the total amount of money earned in "<<n<<" days = "<<total;
    
    
    return 0;
}
