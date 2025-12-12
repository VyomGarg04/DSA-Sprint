// Count how many elements are prime numbers.

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

    int count =0; 
    for(int i=0;i<n;i++){
        if(arr[i]<=1) continue;
        bool prime = true;
        for(int j=2;j*j<=arr[i];j++){
            if(arr[i]%j==0){
                prime = false;
                break;
            }
        }
        if(prime)count++;
    }
        
    cout<<"\nNo of Prime numbers are = "<<count;
}