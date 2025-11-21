// ### **9. Write a program to input a double value and print only its decimal part.**
// (Hint: use `(int)` to remove integer part)

#include<iostream>
using namespace std;

int main(){
    double d;
    cout<<"Enter a doble value : "<<endl;
    cin>>d;
    // double a = d;
    int a = (int)d;
    d -= a;
    cout<<"Decimal value : "<<d<<endl;

}