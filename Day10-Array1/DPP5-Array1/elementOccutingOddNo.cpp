// Find Element Occurring Odd Number of Times

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

    bool visited[n] = {false}; //we have to form a bool array to store if the element is visited or not
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        int frequency = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                frequency++;
                visited[j] = true; //setting value true as this element has already been visited and we do not need to visit it again
            }
        }

        if (frequency % 2 != 0) {
            cout << arr[i] << " occurs odd number of times -> " << frequency<< endl;
            oddCount++;
        }
    }

    cout << "Total odd-frequency elements: " << oddCount << endl;

    return 0;
}