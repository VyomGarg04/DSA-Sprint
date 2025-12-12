// Print the following pattern
// Input: n = 4
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}