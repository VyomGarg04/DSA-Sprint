#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rev(vector<int> &v1){
    vector<int> v2(v1.size());
    for(int i=0;i<v1.size();i++){
        v2[i]=v1[v1.size()-i-1];
    }
    cout<<"Reversed array : ";
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}


int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;
    vector<int> v;
    for(int i=0;i<size;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }

    rev(v);
}