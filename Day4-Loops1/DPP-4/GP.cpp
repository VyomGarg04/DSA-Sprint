//Take input integers a, r, n and print the first n terms of GP.

#include<iostream>
using namespace std;

int main(){
    int a,r,n;
    cout<<"Enter the first number of the series :";
    cin>>a;
    cout<<"Enter the ratio of the terms :";
    cin>>r;
    cout<<"Enter no of terms :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<endl;
        a*=r;
    }
    // for(int i=5;i<=3*n+2;i+3)
}