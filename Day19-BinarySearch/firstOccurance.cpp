#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1,1,2,2,2,2,2,3,3,4,7,10};
    int n = 13;
    int x = 2;
    int lo = 0;
    int hi = n - 1;
    int firstIndex = -1;   // stores the first occurrence

    while (lo <= hi) {
        int mid = lo+(hi-lo) / 2;

        if (arr[mid] == x) {
            firstIndex = mid;
            hi = mid - 1;
        }
        else if (arr[mid] < x) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    if (firstIndex != -1)
        cout << "First occurrence of " << x << " is at index " << firstIndex << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}