// 12. Write a program to input two times (hours and minutes separately) and calculate total minutes.#include<iostream>
#include<iostream>
using namespace std;
int main(){
    int h1,h2,m1,m2,h,m,e;
    cout<<"Enter hour for time1: ";
    cin>>h1;
    cout<<"Enter minute for time1: ";
    cin>>m1;
    cout<<"Enter hour for time2: ";
    cin>>h2;
    cout<<"Enter minute for time2: ";
    cin>>m2;
    h = h1+h2;
    m = m1+m2;
    if(m>=60){
        h++;
        m-=60;
    }
    cout<<"Total time : "<<h<<" hours "<<m<<" minutes"<<endl;
}