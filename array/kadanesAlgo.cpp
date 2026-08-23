#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={-2,-3,4,-1,-2,1,5,-3};

    // Beute sol :   TC=O(n*n*n)    SC=O(1)
    // int n=arr.size();
    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum=sum+arr[k];
    //         }
    //         maxi=max(sum,maxi);
    //     }
    // }
      
    // cout<<"maxi sum is="<<maxi;




    // betteer sol:    TC=O(n*n)    SC=O(1)
    // int n=arr.size();
    // int maxi=INT_MIN;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum=sum+arr[j];
    //     }
    //     maxi=max(sum,maxi);
    // }






// optimal sol :    TC=O(n)    SC=O(1)
        int n=arr.size();

        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }

        }
      
    cout<<"maxi sum is="<<maxi;

    return 0;
}