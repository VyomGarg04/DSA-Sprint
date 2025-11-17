// 10. Write a program to input three marks and print their average as a double value.


#include<iostream>
using namespace std;

int main(){
    int m1,m2,m3;
    cout<<"Enter your marks in three subjects : ";
    cin>>m1>>m2>>m3;
    double avg = (m1+m2+m3)/3;
    cout<<"Average marks :"<<avg;
}