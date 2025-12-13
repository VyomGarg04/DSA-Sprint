// Given an array arr of n integers and an index key(0-based index). Your task is to return the element present at the index key in the array


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

    cout << "Enter the Index: ";
    int index;
    cin>>index;

   
    for (int i = 0; i < n; i++) {
        if(i == index){
            cout<<"The element on index "<<index<<" is "<<arr[i];
        }
    }
}