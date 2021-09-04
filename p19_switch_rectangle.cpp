//Program: 19- “Program for input choice from user for calculating the Area, Perimeter and Diagonal of rectangle and display it on to the screen according to user’s response”
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float l,b,p,a,d;
    int ch;
    cout<<"press 1 for perimeter of rectangle "<<endl;
    cout<<"press 2 for Area of rectangle "<<endl;
    cout<<"press 3 for calculating Diagonal of rectangle "<<endl;
    cin>>ch;
    cout<<"enter length and breadth of rectangle :"<<endl;
    cin>>l>>b;
    p=2*(l+b);
    a=l*b;
    d=sqrt(pow(l,2)+pow(b,2));
    switch(ch)
    {
        case 1: cout<<"perimeter = "<<p<<endl;
        break;
        case 2: cout<<"area = "<<a<<endl;
        break;
        case 3: cout<<"diagonal = "<<d<<endl;
        break;
        default :cout<<"wrong input choice"<<endl;
        break;
    }
    return 0;
}
    
