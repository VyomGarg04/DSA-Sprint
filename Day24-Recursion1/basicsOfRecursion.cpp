#include <iostream>
using namespace std;

void display(int n){
    if(n==0) return;
    cout<<"Vyom Garg"<<endl;
    display(n-1);
}

int main(){
    display(5);
}