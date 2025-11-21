// ### **1. Write a program to input a 3-digit number and print the sum of its digits.**

// (Hint: Extract digits using `%` and `/`.)


#include<iostream>
using namespace std;

int main(){
    int n,s;
    float sum=0.0;
    cout<<"Enter a three digit number : ";
    cin>>n;
    while(n!=0){
        s=n%10;
        n/=10;
        sum += s;
    }
    cout<<"The sum of the digits : "<<sum;
}
