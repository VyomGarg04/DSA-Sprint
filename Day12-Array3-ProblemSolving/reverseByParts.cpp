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
vector<int> rev(int i, int j, vector<int> &v){
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
    cout<<"Enter starting index : "<<endl;
    int i;
    cin>>i;
    
    cout<<"Enter ending index : "<<endl;
    int j;
    cin>>j;
    cout<<"Input array : "<<endl;
    display(v);
    
    cout<<"\n Reversed Array : "<<endl;
    rev(i,j,v);
    display(v);

    
}