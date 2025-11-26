// Print first n’ Fibonacci numbers.


#include<iostream>
using namespace std;

int main(){
    int n,ld,sum=0;
    cout<<"Enter a number : ";
    cin>>n;

   int a=0;
   int b=1;
    cout<<a<<" ";
   for(int i=0;i<n;i++){
    a=a+b;
    cout<<a<<" ";
    b=a-b;
    
    
   }
}