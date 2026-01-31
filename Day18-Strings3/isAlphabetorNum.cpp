#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        if(isalnum(s[i])) cout<<"alpha numeric"<<endl;
        else cout<<"not alpha numeric"<<endl;
    }

}