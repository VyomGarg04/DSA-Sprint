#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array " << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    cout << "Input array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int max = arr[0];
    int smax = arr[1];

    if (smax > max)
    {
        int temp = max;
        max = smax;
        smax = temp;
    }
    for (int i = 2; i < n; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
    }
    cout<<endl;
    cout << "Second maximum value = " << smax;
}