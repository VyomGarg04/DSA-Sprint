// Take input integers a, d, n, and print the first n terms of AP starting from a.

#include<iostream>
using namespace std;

int main(){
    int a,d,n;
    cout<<"Enter the first number of the series :";
    cin>>a;
    cout<<"Enter the difference between the terms :";
    cin>>d;
    cout<<"Enter no of terms :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<endl;
        a+=d;
    }
    // for(int i=5;i<=3*n+2;i+3)
}