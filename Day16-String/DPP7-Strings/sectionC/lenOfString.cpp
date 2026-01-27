// 2. Write a program to count the length of a character array without using strlen()

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a string : "<<endl;
    char ch[50];
    cin.getline(ch,50);

   
    int i=0;

    while(ch[i]!='\0'){
        i++;
    }
    cout<<"The length of the entered string is :"<<i<<endl;
}