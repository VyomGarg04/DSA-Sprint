// Take input integer n and print the factorial of n using a for loop.

#include<iostream>
using namespace  std;

int main(){
    int n,fac=1;
    cout<<"Enter a number to find its factorial : ";
    cin>>n;

    while(n>0){
        fac *= n;
        n--;
    }
    cout<<"Factorial is : "<<fac;
}