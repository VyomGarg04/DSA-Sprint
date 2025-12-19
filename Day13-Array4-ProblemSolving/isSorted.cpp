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
bool isSorted(vector<int> &v){
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1])
            return false;
        
    }
    return true;
    
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

    if(isSorted(v)) cout<<"\nThe given array is sorted";
    else cout<<"\nArray not sorted";
    
    
    
    
}