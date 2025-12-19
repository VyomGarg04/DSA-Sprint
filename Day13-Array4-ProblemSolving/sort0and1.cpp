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
vector<int> sort(vector<int> &v){
    int n0=0,n1=0;
    for(int i=1;i<v.size();i++){
        if(v[i]==0)
            n0++;
        else n1++;
        
    }
    for(int i=0;i<v.size();i++){
        if(i<n0)
            v[i]=0;
        else v[i]=1;
    }
    return v;
    
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

    sort(v);
    cout<<"\nSorted array : "<<endl;
    display(v);
    
    
    
    
}