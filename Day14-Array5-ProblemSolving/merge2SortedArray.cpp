#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



void funMerge(vector<int> &v1, int m, vector<int> &v2,int n){
    int i = 0, j= 0, k = 0,l=m+n;
    vector<int> v3(l);
        while(i<m && j<n){
            if(v1[i]<v2[j]){
                v3[k]=v1[i];
                i++;
            }
            else if(v1[i]>v2[j]){
                v3[k]=v2[j];
                j++;
            }
            k++;
            if(i==n){
                while(j<m){
                    v3[k]=v2[j];
                    k++;
                    j++;
                }
            }
            if(j==m){
                while(i<n){
                    v3[k]=v1[i];
                    k++;
                    i++;
                }
            }
        }
        for(int i=0;i<l;i++)
            cout<<v3[i]<<" ";
}


int main(){
    cout<<"Enter the size of array 1 : "<<endl;
    int m;
    cin>>m;
    cout<<"Enter sorted elements od array1 "<<endl;
    vector<int> v1;
    for(int i=0;i<m;i++){
        int e;
        cin>>e;
        v1.push_back(e);
    }

    cout<<"Enter the size of array2 : "<<endl;
    int n;
    cin>>n;
    vector<int> v2;
    cout<<"Enter sorted elements od array2 "<<endl;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v2.push_back(e);
    }

    funMerge(v1,m,v2,n);

    
}


