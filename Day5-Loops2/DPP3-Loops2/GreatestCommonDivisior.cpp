// 1. Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

// **Sample Output:**
// `Input the first number: 25
// Input the second number: 15
// The Greatest Common Divisor is: 5`


#include<iostream>
using namespace std;

int main(){
    int n,f=0,a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    if(a>=b)
        n=a;
    else
        n=b;
    for(int i=1;i<=n;i++){
        if(a%i==0 && b%i==0){
            f=i;
        }
    }
    cout<<"Greatest common divisior is : "<<f;

}