#include<iostream>
using namespace std;

int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int main(){
    int num1 =5;
    int num2 = 6;
    cout<<max(num1,num2);
    
}