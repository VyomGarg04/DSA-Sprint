// 6. Write a program in C++ to find a prime number within a range.

// `Input number for starting range: 1
// Input number for ending range: 100
// The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
// The total number of prime numbers between 1 to 100 is: 25`

#include<iostream>
using namespace std;

int main(){
    int n,f=0,a,b,flag=0;
    cout<<"Enter starting number : ";
    cin>>a;
    cout<<"Enter ending number : ";
    cin>>b;
    for(n=a;n<=b;n++){
        if(n<2)continue;
        flag=0;
        for(int i=2;i<=n/2;i++){
            
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout << n << " ";
            f++;
        }
    }
    cout<<endl;
    cout<<"Total Prime numbers between "<<a<<" and "<<b<<" are : "<<f;

}