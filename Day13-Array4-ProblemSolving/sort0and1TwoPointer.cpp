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
vector<int> twoPointsort(vector<int> &v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]==0)i++;
        else if(v[j]==1)j--;
        else if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
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

    twoPointsort(v);
    cout<<"\nSorted array : "<<endl;
    display(v);
    
    
    
    
}