//Program: 14 -“Write a Program to Input a character and check whether it is in uppercase, lowercase, digit or symbol and convert it to uppercase to lower case and lowercase to uppercase”
#include<iostream>
 
using namespace std;
 
int main()
{  
char ch;
cout<<"Enter any character: ";
cin>>ch;
 
if(ch>=65&&ch<=90){
cout<<endl<<"You entered an uppercase character";
ch=ch+32;
   cout<<"\nTe Lowercase Alphabet Is "<<ch;
}
else if(ch>=48&&ch<=57)
cout<<endl<<"You entered a digit";
else if(ch>=97&&ch<=122){
cout<<endl<<"You entered a lowercase character";
ch=ch-32;
   cout<<"\nThe uppercase alphabet is "<<ch;
}
else
cout<<endl<<"You entered a special character";
return 0;
}
