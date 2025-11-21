// // ### **9. Write a program to input any amount of money in rupees and print 
// how many 100-rupee notes can be made and how much money remains.**

// // (use integer division & modulus)


#include<iostream>
using namespace std;
int main(){
    int amt,hun,left;
    cout<<"Enter a amount: ";
    cin>>amt;
    hun = amt/100;
    left = amt%100;
    cout<<"No. of hundred rupee notes are : "<<hun<<endl;
    cout<<"Amount left : "<<left<<endl;
}