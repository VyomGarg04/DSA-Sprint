// ### **20. Write a program to input three integers a, b, c and print the value of the expression:**

// `a + b * c - (++b)`

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers :"<<endl;
    cin>>a>>b>>c;
    cout<<"Value of the expression a + b * c - (++b) is : "<<a + b * c - (++b);
}