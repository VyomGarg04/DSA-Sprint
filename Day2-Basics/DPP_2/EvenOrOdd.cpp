// ### **15. Write a program to input any number and print whether its last digit is even or odd using modulus.**

// (Do NOT use if/else → just print the last digit and remainder.)

#include<iostream>
using namespace std;

int main(){

    int num,last_digit,remainder;
    cout<<"Enter a number : ";
    cin>>num;
    last_digit = num%10;
    remainder = last_digit%2;
    cout<<"Last Digit of the number is : "<<last_digit<<endl;
    cout<<"Remainder is : "<<remainder;
}