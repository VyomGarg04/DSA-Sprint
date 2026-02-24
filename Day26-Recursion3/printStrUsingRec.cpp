#include <iostream>
using namespace std;

void display(string s){
    if(s.length()==0)return;
    cout<<s[0]<<" ";

    display(s.substr(1));//o(n^2) time compllexity  [n for reccursion and n for the sunstring]

}

int main(){
    string s = "Vyom Garg";
    display(s);

}