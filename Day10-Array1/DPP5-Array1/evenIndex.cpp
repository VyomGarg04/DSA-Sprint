// Given an array, print elements present at even indexes.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"The negative number =s in the array are";
    for(int i=0;i<n;i++){
        if(i%2==0)
            cout<<arr[i]<<" ";
    }
}