/* Program: 27-“Write a function in C++ to generate the following Pyramid of Numbers and stars”
   0
  101
 21012
3210123

*/
#include <iostream>
using namespace std;

int main()
{
  int i,j,n;
  cout<<"enter the number of lines : ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
     for(j=1;j<n-i;j++)
     {
         cout<<" ";
     }
     for (j=1;j<=i;j++)
     {
         cout<<i-j;
     }
     for (j=1;j<=i-1;j++)
     {
         cout<<j;
     }
     cout<<endl;
  }
    return 0;
}
