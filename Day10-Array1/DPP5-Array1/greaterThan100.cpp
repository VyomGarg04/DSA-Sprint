// Count how many elements are greater than 100.


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
    cout<<"The negative number =s in the array are : ";
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>100)
            count++;
    }
    cout<<"No of elements greater than 100 are : "<<count;
}