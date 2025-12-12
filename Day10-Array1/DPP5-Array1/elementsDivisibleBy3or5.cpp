// Given an array, print all elements divisible by 3 or 5.

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

    cout<<"\nElements divisible by 3 or 5 are : ";
    for(int i=0;i<n;i++){
        if(arr[i]%3==0||arr[i]%5==0){
           cout<<arr[i]<<" ";
        }
    }
    
}