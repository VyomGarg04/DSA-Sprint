#include <iostream>
#include<vector>
using namespace std;

void changeVector(vector<int> &a){
    a[0]=100;
}


int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout<<"Input Vector"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    changeVector(v);

    cout<<"\n After changing"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}