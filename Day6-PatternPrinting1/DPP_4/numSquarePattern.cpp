// Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (should be odd): ";
    cin >> n;
    int a=1;
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout<<a;
            }
            a++;
            cout << endl;
        }

    return 0;
}