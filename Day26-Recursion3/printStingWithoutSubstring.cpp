#include <iostream>
using namespace std;

void display(string s,int idx){
    if(idx==s.length())return;
    cout<<s[idx]<<" ";

    display(s,idx+1);//O(n^2) time compllexity  [n for reccursion and n for the sunstring]

}

int main(){
    string s = "Vyom Garg";
    display(s,0);

}