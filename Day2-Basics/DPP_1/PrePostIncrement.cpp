// 2. Write a program to take an integer x as input and print the result
// of ++x, x++, and the final value of x.
#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"++x : "<<++x<<endl;
    cout<<"x++ : "<<x++<<endl;
}