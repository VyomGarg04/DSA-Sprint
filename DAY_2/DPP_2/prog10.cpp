// 10. Write a program to input a character and print the next character using pre-increment (++).
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    cout<<"Next character is : "<<++ch<<endl;
}