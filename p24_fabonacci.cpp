//Program: 24- “A program for Print Fibonacci series 011235……………….”
#include <iostream>  
using namespace std; 

int main() 
{  
  long double n1=0,n2=1,n3,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
 for(int i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  
}  
    
