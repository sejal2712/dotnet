/*Program: 28-“A Program to find the sum of the first 100 natural numbers”
*/
#include <iostream>
using namespace std;

int main()
{
  int n,sum=0;
  cout<<"enter the number  : ";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      sum +=i;
  }
  cout<<"sum of "<<n<<" natural numers = "<<sum;
    return 0;
}
