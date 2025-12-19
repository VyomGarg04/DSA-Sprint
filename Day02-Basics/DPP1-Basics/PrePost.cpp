// ### **12. Write a program to input an integer and print:**

// - value before post-increment (`x++`)
// - value after post-increment
// - value after pre-increment (`++x`)

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a number : "<<endl;
    int n;
    cin>>n;
    cout<<"Value before post-increment : "<<n<<endl;
    cout<<"Value after post-increment : "<<n++<<endl;
    cout<<"Value after pre-increment : "<<++n<<endl;

}
