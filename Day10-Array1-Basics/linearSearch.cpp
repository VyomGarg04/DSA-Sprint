#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,3,8,4,0,2,9};
    cout<<"Enter the element to Find : ";
    int num,pos=0;
    cin>>num;
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arrSize;i++){
        if(arr[i]==num)
            pos = i+1;
    }
    if(pos==0)cout<<"Element not found";
    else cout<<"Position = "<<pos+1;
}