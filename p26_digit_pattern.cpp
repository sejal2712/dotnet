/* Program: 26-“A program for print the series in the following format”
54321
4321
321
21
1 
*/
#include <iostream>
using namespace std;

int main()
{
  int i,j,n;
  cout<<"enter the number of lines : ";
  cin>>n;
  for(i=n;i>0;i--)
  {
     for(j=i;j>0;j--)
     {
         cout<<j;
     }
     cout<<endl;
  }
    return 0;
}
