// ### **11. Write a program to input the radius and print the area of the circle.**

// (Use: `area = 3.14 * r * r`)


#include<iostream>
using namespace std;

int main(){
    int r;
    double area;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    area = 3.14 * r * r;
    cout<<"Area of the given circle :"<<area;
}