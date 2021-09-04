//“Write a Program for Perform All Arithmetic Operations (‘+’,’-“,’*’,’/’,’ %’)”

#include<iostream>
using namespace std;

int main()
{
    int p, q, sum, sub, mul,mod;
    float divi;
    cout << "Enter any two numbers:\n";
    cin >> p >> q;

    sum = p+q;
    sub = p-q;
    mul = p*q;
    divi = p/q;
    mod = p%q;

    cout << "SUM        " << p << " + " << q << " = " << sum << "\n";
    cout << "DIFFERENCE " << p << " - " << q << " = " << sub << "\n";
    cout << "PRODUCT    " << p << " * " << q << " = " << mul << "\n";
    cout << "DIVISION   " << p << " / " << q << " = " << divi << "\n";
    cout << "MODULUS    " << p << " % " << q << " = " << mod << "\n";
    return 0;
}
