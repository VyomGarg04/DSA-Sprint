// ### **4. Write a program to input total minutes and convert it into hours and minutes.**

// (Eg: 130 → 2 hours 10 minutes)

#include<iostream>
using namespace std;

int main(){
    int min;
    cout<<"Enter total time in minutes : ";
    cin>>min;
    int hrs = min/60;
    min %= 60;
    cout<<"Time in Hours and mins is :"<<hrs<<" hours "<<min<<" minutes";
}