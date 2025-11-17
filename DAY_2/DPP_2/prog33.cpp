// ### **13. Write a program to input a floating number and print only the fractional part.**

// (Eg: 12.56 → 0.56)

#include<iostream>
using namespace std;
int main(){
    int n;
    float num;
    cout<<"Enter a floating value : ";
    cin>>num;
    n = (int)num;
    num -= n;
    cout<<"The fractional part of the number is : "<<num<<endl;
}