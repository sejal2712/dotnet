//Program: 13-“Write a Program for Bitwise Logical Operators, Increment Operators and Ternary Operators”
#include <iostream>

using namespace std;

int main()
{
   int i,a;
   for(i=1 ; i<=5 ; i++) //Increment operator
   cout<<i<<endl;
   
   cout<<"enter a:"; //ternary operator
   cin>>a;
   a=(a==10 ? 1 :0);
   cout<<a;
    return 0;
}
