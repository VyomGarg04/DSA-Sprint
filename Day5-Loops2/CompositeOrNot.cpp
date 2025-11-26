#include<iostream>
using namespace std;

int main(){
    int n,f;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"Composite number";
    }
    else if(n==1){
        cout<<"Neither Composite nor Prime";
    }
    else{
        cout<<"Not Composite";
    }

}