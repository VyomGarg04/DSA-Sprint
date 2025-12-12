// Take an array input and prints its size

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1,5,3,8,4,0,2,5};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    cout<<"No of elements of array are : "<<arrSize;
}