// 1. Write a program in C++ to display the cube of the number up to an integer.

// **Sample Output:**
// `Input the number of terms : 5
// Number is : 1 and the cube of 1 is: 1
// Number is : 2 and the cube of 2 is: 8
// Number is : 3 and the cube of 3 is: 27
// Number is : 4 and the cube of 4 is: 64
// Number is : 5 and the cube of 5 is: 125`

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter starting number : ";
    cin>>n;
    cout<<"Cube of "<<n<<" is "<<n*n*n;

}