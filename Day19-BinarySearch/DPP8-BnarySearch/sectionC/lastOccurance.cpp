// Given a sorted array that may contain duplicate elements, write a program to calculate the LAST occurrence of a given target element.

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

    cout << "Enter the target element: ";
    cin >> target;

    int result = binarySearch(arr, n, target);
    if (result != -1)
        {
            while(arr[result]<=target){
            result++;
            }
            cout<<"The Last occurance of "<<target<<" is : "<<result<<endl;
        }
    else
        cout << "Target value not found" << endl;

}