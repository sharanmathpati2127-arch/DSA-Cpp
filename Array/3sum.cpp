#include<bits/stdc++.h>
using namespace std;


// brute sol TC=O(n*n*n*log(no of unique ele)  SC=O(2*no of triplets)
vector<vector<int>> threesum(vector<int> &arr,int target){

    set<vector<int>> st;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    vector<int> temp;
                    temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());        
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}



// Better sol: TC=O(n*n*logm)   SC=O(n)+O(2*no of triplets)
vector<vector<int>> threeSum(vector<int> &arr,int target){

    set<vector<int>> st;
    for(int i=0;i<arr.size();i++){
        set<int> hashset;
        for(int j=i+1;j<arr.size();j++){
            int el=target-(arr[i]+arr[j]);
            if(hashset.find(el)!=hashset.end()){
                vector<int> temp={el,arr[i],arr[j]};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }

    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}




// optimal sol: TC=O(n^3)    SC=O( no of 4 no pair)(to return ans only)
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        if(i!=0 && nums[i]==nums[i=1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==target){
                vector<int> temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
            else if(sum>target){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return ans;
}



int main(){
    vector<int> arr={-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(arr, 0);

    for(auto triplet : ans){
        for(auto x : triplet){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
