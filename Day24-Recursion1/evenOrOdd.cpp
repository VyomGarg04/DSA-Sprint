#include <iostream>
using namespace std;

bool isEven(int n){
    if(n==0) return true; //base case for even number
    if(n==1) return false; //base case for odd number
    return isEven(n-2);
}

int main(){
    if(isEven(16)){
        cout<<"Even number";
    }
    else
        cout<<"Odd number";
}