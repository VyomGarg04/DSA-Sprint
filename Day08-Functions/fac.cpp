#include<iostream>
using namespace std;

int fac(int n){
    int fac =1;
    if(n==1 || n==0)
        return 1;
    else{
        for(int i=1;i<=n;i++){
        fac *= i;
        
        }
        return fac;
    }

}

int main(){
    int num =5;
    cout<<fac(num);
}

