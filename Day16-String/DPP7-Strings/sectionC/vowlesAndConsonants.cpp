// 3. Take a character array as input and print:
//     - Total number of vowels
//     - Total number of consonants

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a string : "<<endl;
    char ch[50];
    cin.getline(ch,50);

    int i=0;
    int vowel=0,consonant=0;
    while(ch[i]!='\0'){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            vowel++;
        }
        else consonant++;
        i++;
    }
    cout<<"The no. of vowels are :"<<vowel<<endl;
    cout<<"The no. of consonants are :"<<consonant<<endl;
}