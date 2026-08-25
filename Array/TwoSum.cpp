#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    arr={2,3,4,8,11,12};
    int target=12;

    // brute sol: TC=O(n*n)   SC=O(1)
    // for(int i=0;i<arr.size();i++){
    //     for(int j=i+1;j<arr.size();j++){
    //         if(i==j) continue;
    //         if(arr[i]+arr[j]==target){
    //             cout<<i<<","<<j<<" and ";
    //         }
    //     }
    // }




// better sol:  TC=O(n*logn)   SC=O(n)
// map<int,int>mpp;
// for(int i=0;i<arr.size();i++){
//     int a=arr[i];
//     int more=target-a;
//     if(mpp.find(more)!=mpp.end()){
//         cout<<"Yees";
//     }
//     mpp[a]=i;
// }

 
// optomal sol:  TC=O(n)   SC=O(1)
// for sorted array:
int left=0;
int right=arr.size()-1;
while(left<right){
    if(arr[left]+arr[right]==target){
        cout<<right<<" "<<left;
        break;
    }
    else if(arr[left]+arr[right]>target){
        right--;
    }
    else{
        left++;
    }
}

return 0;
}