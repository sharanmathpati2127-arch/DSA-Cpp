#include<bits/stdc++.h>
using namespace std;



// brute sol:  TC=O(n^4*log(no of unique ele))   SC=2*O(no of four eles set)
vector<vector<int>> foursum(vector<int> &arr,int target){
    set<vector<int>> st;
    for(int i=0;i<arr.size()-3;i++){
        for(int j=i+1;j<arr.size()-2;j++){
            for(int k=j+1;k<arr.size()-1;k++){
                for(int l=k+1;l<arr.size();l++){
                    int sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target){
                        vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>>  ans(st.begin(),st.end());
    return ans;

}



//brute sol:  TC=O(n^3*log(m))   SC=O(n)+2*O(no of four eles set)
vector<vector<int>> fourSum(vector<int> &arr,int target){
    set<vector<int>> st;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            set<int> hashset;
            for(int k=j+1;k<arr.size();k++){
                int forth=target-(arr[i]+arr[j]+arr[k]);
                if(hashset.find(forth)!=hashset.end()){
                    vector<int> temp={arr[i],arr[j],arr[k],forth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(arr[k]);
            }
        }
    }
    vector<vector<int>>  ans(st.begin(),st.end());
    return ans;
}

int main(){
    vector<int> arr = {2, 1, 0, -1, 4, -2, 3, -3, 5, -4, 6, 7, -5, 2, -1};
    int target = 3;
    vector<vector<int>> ans=fourSum(arr,target);
    int count =0;
    for(auto triplets: ans){
        for(auto x: triplets){
            cout<<x<<" ";
        }
        cout<<endl;
    }



// optimal sol: TC=O(n^3)    SC=O( no of 4 no pair)(to return ans only)

// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     sort(nums.begin(),nums.end());
//     int n=nums.size();
//     vector<vector<int>> ans;

//     for(int i=0;i<n;i++){
//         if(i!=0 && nums[i]==nums[i-1]) continue;
//         for(int j=i+1;j<n;j++){
//             if(j!=i+1 && nums[j]==nums[j-1]) continue;
//             int k=j+1;
//             int l=n-1;
//             while(k<l){
//                 long long sum=nums[i];
//                 sum+=nums[j];
//                 sum+=nums[k];
//                 sum+=nums[l];
//                 if(sum==target){
//                     vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
//                     ans.push_back(temp);
//                     k++;
//                     l--;
//                     while(k<l && nums[k]==nums[k-1]) k++;
//                     while(k<l && nums[l]==nums[l+1]) l--;
//                 }
//                 else if(sum>target){
//                     l--;
//                 }
//                 else{
//                     k++;
//                 }
//             }
//         }

//     }
//     return ans;
// }
    return 0;
}

