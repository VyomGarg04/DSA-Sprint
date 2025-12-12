// ### **14. Write a program to input a 4-digit year and print the last two digits.**

// // (Eg: 2025 → 25)

#include<iostream>
using namespace std;

int main(){
    int year,lst;
    cout<<"Enter a year : ";
    cin>>year;
    lst = year%100;
    cout<<"Last 2 digits of the year is :"<<lst;
}