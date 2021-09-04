//Program: 16- “A program for Mark sheet Calculations (total, percentage and result) using ternary operator”

#include<iostream>
 
using namespace std;
 
int main()
{  
int A[5],t,p,r;
cout<<"enter marks of 5 subjects :";
for(int i=0;i<5;i++)
cin>>A[i];
for(int i=0;i<5;i++)
t+=A[i];
cout<<"total = "<<t<<endl;
p=t/5;
cout<<"pecentage = "<<p<<" %"<<endl;
r=(p>33 ? 1 : 0 );
cout<<r<<endl;
cout<<"1 represents pass and 0 represents fail for result"<<endl;
return 0;
}
