#include <iostream>
using namespace std;


void display(int arr[],int n,int idx){
    if(idx==n){
        cout<<arr[idx]<<" ";
        return;
    }

    display(arr,n,idx+1);


}
int main(){
    int arr[]={2,1,3,5,6,8,9};

    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);

}