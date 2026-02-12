#include <iostream>
using namespace std;

void display(int n){
    if(n==0) return; //base case
    display(n-1);
    cout<<n<<endl;//just exchanged the two lines
    
}

int main(){
    display(5);
}