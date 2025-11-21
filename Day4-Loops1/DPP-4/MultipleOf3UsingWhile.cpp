// Take input integer n and print all multiples of 3 from 1 to n using a while loop.

#include<iostream>
using namespace std;

int main(){
    int i=3,n;
    cout<<"Enter a number :";
    cin>>n;
    
    while(i<n){
        cout<<i<<endl;
        i+=3;
    }
}