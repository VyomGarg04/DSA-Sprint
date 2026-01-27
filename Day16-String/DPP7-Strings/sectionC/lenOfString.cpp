// 

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