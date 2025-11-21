// ### **8. Write a program to input a character and print the next two characters in the ASCII sequence.**

// (Eg: input A → output B, C)

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    cout<<"1st next character is : "<<++ch<<endl;
    cout<<"2nd next character is : "<<++ch<<endl;
}