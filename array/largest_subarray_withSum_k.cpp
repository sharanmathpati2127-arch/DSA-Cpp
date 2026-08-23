#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    arr={1,2,3,1,1,1,3,2,3};
    int length=0;
    long long m=3;


    // brute sol:   TC=O(n*n)   SC=O(1)
    // for(int i=0;i<arr.size();i++){
    //     int sum=0;
    //     for(int j=i;j<arr.size();j++){
    //         sum=sum+arr[j];
//             if(sum==m){
//             length=max(length,j-i+1);
//         }
//     }
// }
    // cout<<"Length of subarray is="<<length;





    // brute sol:  TC=O(n*logn)    SC=O(n)

    // map<long long,int>preSumMap;
    // long long sum=0;
    //  for(int i=0;i<arr.size();i++){
    //     sum=sum+arr[i];
    //     if(sum==m){
    //         length=max(length,i+1);
    //     }

    //     int rem=sum-m;
    //     if(preSumMap.find(rem)!=preSumMap.end()){
    //         int len=i-preSumMap[rem];
    //         length=max(length,len);
    //     }
    //     if(preSumMap.find(sum)==preSumMap.end()){
    //         preSumMap[sum]=i;
    //     }

    //  }
    //  cout<<"Length of subarray is="<<length;






        // optimal sol: 
        long long sum=arr[0];
        int n=arr.size();
        int lenght=0;
        int left=0;
        int right=0;

        while(right<n){
            while(sum>3 && left<=right){
                sum=sum-arr[left];
                left++;
            }
            if(sum==3){
                length=max(lenght,right-left+1);
            }
            right++;
            if(right<n){
            sum=sum+arr[right];
            }
        }
  
         cout<<"Length of subarray is="<<length;
        

    return 0;

}