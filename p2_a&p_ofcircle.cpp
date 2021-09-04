//“Write a Program for Calculate Area and Perimeter of the Circle”

#include<iostream>
#define PI 3.14
using namespace std;

int main()
{
    float a,p,r;
    cout<<"enter radius of circle"<<endl;
    cin>>r;
    a=PI*r*r;
    p=2*PI*r;
    cout<<"area = "<<a<<endl;
    cout<<"perimeter = "<<p<<endl;
    
    return 0;
}
