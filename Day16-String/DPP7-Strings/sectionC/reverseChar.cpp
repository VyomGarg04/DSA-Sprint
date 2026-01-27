// 4. Write a program to print a character array in reverse order.

#include <iostream>
#include<cstring>
using namespace std;

int main(){
    cout<<"Enter a string : "<<endl;
    char ch[50];
    cin.getline(ch,50);

    int i=0;int j=strlen(ch)-1;

    while(i<j){
        int temp = ch[i];
        ch[i]= ch[j];
        ch[j]=temp;
        i++;
        j--;
    }

    cout<<"The reversed string is :"<<ch<<endl;
}