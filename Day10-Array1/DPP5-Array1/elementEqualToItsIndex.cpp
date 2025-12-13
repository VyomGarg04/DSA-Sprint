// Given an array arr. Your task is to find the elements whose value is equal to that of its index value

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array "<<endl;
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }

    cout<<"Input array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    cout<<"Elements equal to their index are :"<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        if(i==arr[i]){
            cout<<arr[i]<<" ";
            count++;
        }
    }
    cout<<"Total Elements :"<<count<<endl;
}