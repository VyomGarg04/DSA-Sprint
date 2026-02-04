// Take a character array as input and check whether it is a **palindrome**.
//     - Example: `madam`, `level`

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    cout<<"Enter a string : "<<endl;
    char ch[50];
    cin.getline(ch,50);

    int i=0;int j=strlen(ch)-1;bool flag = true;

    while(i<=j){
        if(ch[i]!=ch[j]){
            flag = false;
            break;
        }
            i++;
            j--;
        
    }
    if(flag)cout<<"Palindrome String";
    else cout<<"Not Palindrome ";

}