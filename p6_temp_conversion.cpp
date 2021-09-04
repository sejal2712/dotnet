//“Write a Program for Convert Temperature from Celsius to Fahrenheit and Fahrenheit to Celsius”
#include <iostream>

using namespace std;

int main()
{
    float c,f;
    cout<<"enter the temperature in degree celsius \n";
    cin>>c;
    f=((c*1.8)+32);
    cout<<"converted temperature in fahrenheit is \t"<<f<<"\n";

    cout<<"enter the temperature in fahrenheit \n";
    cin>>f;
    c=((f-32)/1.8);
    cout<<"converted temperature in degree celsius is\t"<<c;

    return 0;

}
