#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        a=1;
        
        for(int j=0;j<i+1;j++){
            cout<<a;
            a+=2;
        }
        cout<<endl;
    }
}