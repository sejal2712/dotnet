//Program: 30-“A Program to find the sum and average of the given numbers using the while loop”
#include <iostream>

using namespace std;

int main()
{
    int n,i=1;
    float sum=0,avg,x;
    cout<<"how many numbers :";
    cin>>n;
    cout<<"enter numbers: "<<endl;
    while(i<=n)
    {
        cin>>x;
        sum+=x;
        i++;
    }
    avg=sum/n;
    cout<<"sum = "<<sum<<"\t"<<"average = "<<avg<<endl;
    return 0;
}
