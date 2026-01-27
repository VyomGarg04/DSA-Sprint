// 1. Create a character array of size 50 and take input of a **full sentence** (with spaces) 
//     - Print the sentence character by character using a loop and null character condition.

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a string : "<<endl;
    char ch[50];
    cin.getline(ch,50);

    cout<<"The entered string is :"<<endl;
    int i=0;

    while(ch[i]!='\0'){
        cout<<ch[i];
        i++;
    }
}