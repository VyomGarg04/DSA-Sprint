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
vector<int> rotate(int i,int j,vector<int> &v){
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
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<size;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }

    cout<<"Input array : "<<endl;
    display(v);


    cout<<"\nNo of steps you want to rotate your array : "<<endl;
    int k;
    cin>>k;
    
    int n = v.size();
    
    // if(k>n) k = k-n;
    k %= n;
    rotate(n-k,n-1,v);
    rotate(0,n-k-1,v);
    rotate(0,n-1,v);
    cout<<"After rotating : "<<endl;
    display(v);
    

    
    
    
    
}