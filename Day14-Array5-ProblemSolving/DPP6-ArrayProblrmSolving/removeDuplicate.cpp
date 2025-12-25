#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//two pointer(iterator) approach
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int removeDuplicates(vector<int>& nums) {
    if(nums.empty()) return 0;//this handles the case when there are no elements in the array
    int k=1;
    for(int i =1;i<nums.size();i++){
        if(nums[i]!=nums[k-1]){
            nums[k]=nums[i];
            k++;
        }
    }
    cout<<"After removing the duplicate elements "<<endl;
    cout<<"After removing the duplicate elements "<<endl;
    for(int i=0; i<k; i++) {
        cout<<nums[i]<<" ";
    }
    return k;
}
int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;
    vector<int> v;
    cout<<"Enter array of 0's and 1's"<<endl;
    for(int i=0;i<size;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }

    cout<<"Input array : "<<endl;
    display(v);

    
    cout<<"\nTotal unique elements = "<<removeDuplicates(v);
    
    
    
    
}