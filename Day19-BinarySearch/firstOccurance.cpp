#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,1,2,2,2,2,2,3,3,4,7,10};
    int n =13;
    int x=2;
    int lo=0;
    int hi=n-1;
    bool flag=false; //element is not persent in array
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        
        if(arr[mid]==x){
            if(mid==0){
                flag=true;
                cout<<mid;
            }
            else if(arr[mid-1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else 
        }
        else if(arr[mid]<x) lo =mid +1;
        else hi =mid-1;
    }
}