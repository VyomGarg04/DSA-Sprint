#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    

    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<endl;
        cin>>arr[i];
    }

    int oddCount =0;
    int evenCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)evenCount++;
        else oddCount++;
    }

    cout<<"No. of even elements are : "<<evenCount<<endl;
    cout<<"No. of odd elements are : "<<oddCount<<endl;

}