// Print the sum of this series :
// 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum-=i;
        }
        else
            sum +=i;
    }
    cout<<"The sum of the series 1 - 2 + 3 - 4 + 5 - 6... upto "<<n<<" is : "<<sum;

}