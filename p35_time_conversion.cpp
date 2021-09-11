//Program: 35-“Program for convert seconds into minutes and hours. ”
#include <iostream>
using namespace std;

int main()
{
    float s,m,h;
    cout<<"enter seconds: ";
    cin>>s;
    m=s/60;
    h=s/3600;
    cout<<"minutes = "<<m<<" \t "<<"hours = "<<h<<endl;

    return 0;
}
