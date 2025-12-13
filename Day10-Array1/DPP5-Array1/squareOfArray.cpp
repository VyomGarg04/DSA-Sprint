// Replace every element by its square and print the updated array.

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

    cout<<"Original array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

     cout<<"Updated array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]*arr[i]<<" ";
    }
}