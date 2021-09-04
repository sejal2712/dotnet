//Program: 17- “A Program for Swapping of two numbers with and without temporary variable
#include<iostream>
 
using namespace std;
 
int main()
{  
int a,b;
cout<<"enter a and b"<<endl;
cin>>a>>b;
//without temporary variable
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
a=a*b;     
b=a/b;    
a=a/b;    
cout<<"After swap a= "<<a<<" b= "<<b<<endl;   

//with temporary variable
int c,x,y;
cout<<"enter x and y"<<endl;
cin>>x>>y;
cout<<"Before swap x= "<<x<<" y= "<<y<<endl; 
c=x;
x=y;
y=c;
cout<<"After swap x= "<<x<<" y= "<<y<<endl; 
return 0;
}
