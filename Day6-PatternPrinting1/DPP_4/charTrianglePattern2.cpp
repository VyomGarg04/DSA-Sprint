// Print the following pattern
// Input: n = 4
// Output:
// a
// a b
// a b c
// a b c d


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<(char)(j+96);
        }
        cout<<endl;
    }
}