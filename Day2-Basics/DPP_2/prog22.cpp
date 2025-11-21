// ### **2. Write a program to input a 2-digit number and print the reversed number.**

// (Eg: input 53 → output 35)

#include<iostream>
using namespace std;

int main(){
    int n,s=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n!=0){
        s = s*10 +n%10;
        n/=10;
    }
    cout<<"The reverse of the number is : "<<s;
}
