// ### **18. Write a program to input a double number, cast it to int, then print:**

// - integer part
// - decimal part
// - integer part + decimal part (as double)

#include<iostream>
using namespace std;

int main(){
    double num,dec;
    int n;
    cout<<"Enter a double number : ";
    cin>>num;
    n = (int)num;
    cout<<"Integeral Part of number is : "<<n<<endl;
    dec = num-n;
    cout<<"Decimal Part of number is : "<<dec<<endl;
    cout<<"Integeral and Decimal Part of number is : "<<num<<endl;
}