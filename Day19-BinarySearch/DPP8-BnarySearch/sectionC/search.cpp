// 1. Write a program to check whether a given number exists in a sorted array or not.
//     If it exists, print **"FOUND"**, otherwise print **"NOT FOUND"**.

#include<iostream>
using namespace std;

int binarySearch(int nums[], int n, int target){
    int low=0;
    int high=n-1;

    while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) high = mid-1;
            else low = mid+1;
        }
        return -1;
}

int main(){
    int nums[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;

    cout << "Enter number to search: ";
    cin >> target;

    int result = binarySearch(nums, n, target);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

}
    