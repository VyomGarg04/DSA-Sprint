#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a<0)
        a *= -1;
    cout<<"The absolute value of the number is : "<<a;

}