#include <iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0; //base case
    return n + sum(n-1);
}

int main(){
    cout<<sum(5);
}