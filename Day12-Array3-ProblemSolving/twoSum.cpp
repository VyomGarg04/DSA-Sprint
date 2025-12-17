#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

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

    int target;
    cout<<"Enter your Target : ";
    cin>>target;

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==target)
                cout<<i<<" "<<j;
        }
    }
}