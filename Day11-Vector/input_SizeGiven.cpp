#include <iostream>
#include<vector>
using namespace std;


int main() {
    vector<int> v(4);
    cout<<"input vector elements";
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    cout<<v[0];

}