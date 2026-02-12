#include <iostream>
using namespace std;

int count(int num){
    if(num==0) return 0; //base case
    return 1+count(num/10);
    
}

int main(){
    cout<<count(5759);
}