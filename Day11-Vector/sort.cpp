#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main() {
    vector<int> v;
    cout<<"Enter the size";
    int size;
    cin>>size;
    cout<<"Input vector elements"<<endl;

    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Input Vector";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }

    cout<<"\n After Sorting"<<endl;

    sort(v.begin(),v.end());
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }



}