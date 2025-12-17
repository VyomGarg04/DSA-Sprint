#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//two pointer(iterator) approach
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
vector<int> rev(vector<int> &v){
    int i = 0;
    int j=v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return v;
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

    cout<<"Input array : "<<endl;
    display(v);
    
    cout<<"\n Reversed Array : "<<endl;
    rev(v);
    display(v);

    
}