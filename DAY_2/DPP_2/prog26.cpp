// ### **6. Write a program to input temperature in Celsius and convert it to Fahrenheit.**

// `F = C * 9/5 + 32`

#include<iostream>
using namespace std;

int main(){
    float temp;
    cout<<"Enter total temperature in celcius : ";
    cin>>temp;
    temp = temp * 9/5 + 32;
    cout<<"Temperature in Fahernheit :"<<temp;
}