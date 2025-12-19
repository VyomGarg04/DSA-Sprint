#include<iostream>
using namespace std;

int main(){
    int n,ld,rev=0;
    cout<<"Enter a number : ";
    cin>>n;

    while(n>0){
        ld = n%10;
        rev= rev*10 + ld;
        n/=10;
    }
    cout<<rev;
}