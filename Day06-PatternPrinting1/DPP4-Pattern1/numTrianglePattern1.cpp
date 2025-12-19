// // print the following pattern
// // Input: n = 4
// // Output:
// // 1 2 3 4
// // 1 2 3
// // 1 2
// // 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}