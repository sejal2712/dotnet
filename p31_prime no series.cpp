//Program: 31-“A Program for generate prime number series”
#include<iostream>
using namespace std;

int main()
{
    int n, i, j, p;

    cout << "Enter a number upto which prime numbers to be shown: ";
    cin>>n;

    for (i = 2; i <= n; i++) {
        p = 1;
        j = 2;
        while (j < i) {
            if (i % j == 0) {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1) {
            cout << i <<endl;
        }
    }

    return 0;
}
