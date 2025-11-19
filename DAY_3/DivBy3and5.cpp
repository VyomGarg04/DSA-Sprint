#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a%3==0 && a%5==0){
        cout<<"The number is divisible by both 3 and 5";
    }
    else{
        cout<<"The number is not divisible by 3 and 5";
    }

}