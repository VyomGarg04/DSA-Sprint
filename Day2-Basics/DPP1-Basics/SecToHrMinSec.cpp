// 5. Write a program to input seconds and convert them into hours, minutes, and seconds.

#include<iostream>
using namespace std;

int main(){
    int sec,ls;
    cout<<"Enter total time in seconds : ";
    cin>>sec;
    int hrs = sec/3600;
    ls = sec -(hrs*3600);
    int min = ls/60;
    ls %= 60;
    cout<<"Time in Hours, mins and second is :"<<hrs<<" hours "<<min<<" minutes "<<ls<<" seconds";
}