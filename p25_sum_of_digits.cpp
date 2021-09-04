//Program: 25- “A program for find out the sum of digits and count the digits of a number”
#include <iostream>  
using namespace std;  
int main()  
{  
int n,sum=0,m,num=0,n1;    
cout<<"Enter a number: ";    
cin>>n;   
n1=n;
while(n > 0)    
{    
   m=n%10;    
   sum=sum+m;    
   n=n/10;    
}    
cout<<"Sum of digits = "<<sum<<endl;    

while (n1 != 0)
    {
        n1 /= 10; 
        num++; 
    }
    cout << "The number of digits in the entered number "<<" is "<< num;
return 0;  
}  
