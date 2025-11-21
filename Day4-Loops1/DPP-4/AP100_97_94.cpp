// Take input integer n, and print the AP 100, -97, -94… but only show the positive terms.

#include<iostream>
using namespace std;

int main(){
    int a,n;
    cout<<"Enter no of terms :";
    cin>>n;
    a=100;
    cout<<"+ve "<<n<<"terms of the AP are : ";
    for(int i=0;i<n;i++){
        if(n>34 || a<0)
            cout<<"The entered value of n would contain -ve values"<<endl;
        else{
            cout<<a<<endl;
            a-=3;
        }
    }
}