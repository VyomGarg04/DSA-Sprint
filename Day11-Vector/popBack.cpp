#include <iostream>
#include<vector>
using namespace std;


int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout<<"Before pop_back"<<endl;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<endl;

    cout<<"After pop_back"<<endl;
    v.pop_back();

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";

}