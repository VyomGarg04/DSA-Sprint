// Take input integer n and print the sum from 1 to n.

#include<iostream>
using namespace std;

int main(){
    int i,n,f=0;
    cout<<"Enter a number :";
    cin>>n;
    i=0;
    while(i!=n){
        i++;
        f+=i;
    }
    cout<<f<<endl;
}