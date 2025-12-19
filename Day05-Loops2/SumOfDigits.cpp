#include<iostream>
using namespace std;

int main(){
    int n,ld,sum=0;
    cout<<"Enter a number : ";
    cin>>n;

    while(n>0){
        ld = n%10;
        sum+= ld;
        n/=10;
    }
    cout<<sum;
}