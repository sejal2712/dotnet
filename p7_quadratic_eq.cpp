//“Write a Program for Solving Quadratic Equation”
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c,x1,x2;
    cout<<"enter coefficient a,b and c of Quadratic Equation of form (ax^2 + bx + c = 0) = ";
    cin>>a>>b>>c;
    cout<<"equation : "<<"("<<a<<" * x * x) + ("<<b;
    cout<<" * x) + ("<<c<<") = 0"<<endl;
    
    if (a==0 && b==0)
        cout<<"not a valid equation";
    else if (a==0 && b!=0)
       {  x1=-(c/b);
          cout<<endl;
          cout<<"root = "<<x1;
          cout<<endl; 
       }
    else if ((b*b-4*a*c)>0)
    {
    x1=((-b+(sqrt((b*b)-4*a*c)))/2*a);
    x2=((-b-(sqrt((b*b)-4*a*c)))/2*a);
    cout<<"the two roots of your quadratic equation are = "<<x1<<" "<<x2;
    }
    else if ((b*b-4*a*c)<0)
    {
    cout<<"not a real root"<<endl;
    }
    return 0;
}
