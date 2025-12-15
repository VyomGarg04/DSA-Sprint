#include <iostream>
#include<vector>
using namespace std;


int main() {
    vector<int> v(4);
    cout<<"input vector elements"<<endl;
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    cout<<"Input Vector";
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }

}