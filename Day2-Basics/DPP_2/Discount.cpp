// ### **7. Write a program to input the total amount and percentage and find the final discounted value.**

// (Eg: amount=1000, discount=10 → 900)

#include<iostream>
using namespace std;

int main(){
    int amt,dis;
    float cost;
    cout<<"Enter the amount : ";
    cin>>amt;
    cout<<"Enter the discount : ";
    cin>>dis;
    cost = amt - (amt*dis)/100;
    cout<<"Price after discount : "<<cost;
}