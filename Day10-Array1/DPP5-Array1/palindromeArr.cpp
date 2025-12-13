// Given an array arr, the task is to find whether the arr is palindrome or not. If the arr is palindrome then return true else return false.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr2[n],arr3[n];
    for(int i=0;i<n;i++){
        arr3[i]=arr[i];
    }
    
    
    // int j=0;
    // for(int i=n-1;i>=0;i--){
    //     arr2[j]=arr[i];
    //     j++;
    // }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr3[n-i-1])
            count++;
    }
    if(count == n)cout<<"Palindrome Array";
    else cout<<"Not Palindrome";

    
}