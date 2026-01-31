#include<iostream>
#include<string>
using namespace std;

int main(){
    string st;
    getline(cin,st);

    string str;
    
        for(int i=0;i<st.length();i++){
            int k=2;
            while(k>0){
                if(str.empty()) str.push_back(st[i]);
                else if(str.back()==st[i])str.pop_back();
                else str.push_back(st[i]);
                k--;
            }
        }
    cout<<str;

}