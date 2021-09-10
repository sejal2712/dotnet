//Program: 29-“A Program to display the first 100 odd numbers using the while loop”
#include <iostream>

using namespace std;

int main()
{
    int n=1;
    cout<<"odd no. between 1 and 100- "<<endl;
   
    while(n<=100)
    {
        cout<<n<<" ";
        n=n+2;
    }

    return 0;
}
