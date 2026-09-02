#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr={{1,3},{2,4},{2,6},{8,9},{9,11},{15,18},{16,17}};
    vector<vector<int>> ans;

    // brute sol:  TC=O(nlogn+2n)  SC=O(n)
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        int start=arr[i][0];
        int end=arr[i][1];

        if(!ans.empty() && end<=ans.back()[1]){
            continue;
        }
        // check overlaping
        for(int j=i+1;j<arr.size();j++){
            if(arr[j][0]<=end){
                end=max(end,arr[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start,end});
    }




    // optimal sol:TC=O(nlogn+n)  SC=O(n)
    class Solution {
    public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        if(ans.empty()){
                ans.push_back({nums[0][0],nums[0][1]});
            }

        for(int i=1;i<n;i++){
            if(nums[i][0]<=ans.back()[1]){
                ans.back()[1]=max(ans.back()[1],nums[i][1]);
            }
            else{
                ans.push_back({nums[i][0],nums[i][1]});
            }
            
        }
        return ans;
    }
};
    return 0;
}