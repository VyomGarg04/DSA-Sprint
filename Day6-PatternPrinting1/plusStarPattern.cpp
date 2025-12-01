#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (should be odd): ";
    cin >> n;

    int mid = n / 2; 
    if (n % 2 != 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == mid || i == mid) { 
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "Invalid Input";
    }

    return 0;
}