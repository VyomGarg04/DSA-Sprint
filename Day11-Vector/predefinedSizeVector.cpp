#include <iostream>
#include<vector>
using namespace std;


int main() {
    vector<int> v(3,6);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout<<v[1];
    cout<<v[4];

}