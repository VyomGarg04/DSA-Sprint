// 18. Write a program to input an integer and print its ASCII equivalent character if converted using char(x).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Character for the given ASCII value is :  "<<(char)n<<endl;
}