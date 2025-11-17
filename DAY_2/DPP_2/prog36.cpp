// 16. Write a program to input the total number of seconds and convert it into minutes + seconds.

#include<iostream>
using namespace std;

int main(){
    int sec,ls;
    cout<<"Enter total time in seconds : ";
    cin>>sec;
    int min = sec/60;
    ls = sec -(min*60);
    ls %= 60;
    cout<<"Time in Minutes and second is :"<<min<<" minutes "<<ls<<" seconds";
}