//Program: 10-“Program for input three number and find the greatest element using Simple if, Nested if………else, if…..else if……..if Statement
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter 3 different no.s - ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<a<<" is greatest"<<endl;
    else if(b>c && b>a)
    cout<<b<<" is greatest"<<endl;
    else
    cout<<c<<" is greatest"<<endl;
    
   return 0;
}    
