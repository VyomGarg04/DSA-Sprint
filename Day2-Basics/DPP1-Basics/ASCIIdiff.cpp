// ### **17. Write a program to input two characters and print the ASCII difference between them.**

// (Eg: A and a → output 32)

#include<iostream>
using namespace std;
int main(){
    char ch1,ch2;
    int diff;
    cout<<"Enter 1st character: ";
    cin>>ch1;
    cout<<"Enter 2nd character: ";
    cin>>ch2;
    diff = ch2-ch1;
    cout<<"ASCII difference between characters is : "<<diff<<endl;
}