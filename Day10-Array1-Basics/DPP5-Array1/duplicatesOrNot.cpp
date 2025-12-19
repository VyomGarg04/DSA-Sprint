// Given an array, predict if the array contains duplicates or not.

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


    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;     
            }           
        }
        if(flag)break;        
    }
    if(flag)
        cout << "\nDuplicate elements found";
    else
        cout << "\nNo duplicate elements";

}