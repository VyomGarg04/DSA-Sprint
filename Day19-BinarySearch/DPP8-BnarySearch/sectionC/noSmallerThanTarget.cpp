// Given a sorted array and a target value, return the count of elements smaller than the target.

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int low=0;
    int high=n-1;

    while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) high = mid-1;
            else low = mid+1;
        }
        return -1;
}

int main(){
    int target;

    int n;
    cout<<"Enter number of elements you want to enter :"<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "Enter the targer element: ";
    cin >> target;

    int result = binarySearch(arr, n, target);
    if (result != -1)
        cout << "No. of elements smaller than " << target <<" are :"<<result<< endl;
    else
        cout << "Target value not found" << endl;

}
    