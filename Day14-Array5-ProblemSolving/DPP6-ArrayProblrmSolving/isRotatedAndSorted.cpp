// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int> rotate(int i,int j,vector<int> &v){
//     while(i<j){
//         int temp = v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     return v;

// }

// bool isSorted(vector<int> &v){
//     for(int i=1;i<v.size();i++){
//         if(v[i]<v[i-1])
//             return false;
        
//     }
//     return true;
    
// }

// bool check(vector<int>& nums){
//     int k=0,n=nums.size();
//     for(k=0;k<n-1;k++){
//         if(nums[k]>nums[k+1])
//             break;
//     } 
//     k=n;
//     rotate(n-k,n-1,nums);
//     rotate(0,n-k-1,nums);
//     rotate(0,n-1,nums);
    
//     if(isSorted(nums))return true;
//     else return false;
    
// }


// int main(){
//     cout<<"Enter the size of array : "<<endl;
//     int n;
//     cin>>n;
//     cout<<"Enter sorted elements of array "<<endl;
//     vector<int> nums;
//     for(int i=0;i<n;i++){
//         int e;
//         cin>>e;
//         nums.push_back(e);
//     }

//     if(check(nums)) cout<<"Sorted and Rotated"<<endl;
//     else cout<<"Not sorted an rotated"<<endl;
    
// }