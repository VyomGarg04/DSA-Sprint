// Take input integer n and print numbers from 1 to n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of terms :";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<i<<endl;
    }
}