#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int firstRepeated(vector<int> &arr) {
    int index=0;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j] && i!=j) return i+1;
        }
    }
    return -1;
}

int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;
    vector<int> v;
    cout<<"Enter array of 0's and 1's"<<endl;
    for(int i=0;i<size;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }

    cout<<"Input array : "<<endl;
    display(v);


    int index = firstRepeated(v);
    cout<<"Firsty index = "<<index;
}