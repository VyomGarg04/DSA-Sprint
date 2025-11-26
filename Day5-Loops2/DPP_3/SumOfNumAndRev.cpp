// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

#include<iostream>
using namespace std;

int main(){
    int n,ld,rev=0,a;
    cout<<"Enter a number : ";
    cin>>n;
    a=n;
    while(n>0){
        ld = n%10;
        rev= rev*10 + ld;
        n/=10;
    }
    
    cout<<rev+a;
}