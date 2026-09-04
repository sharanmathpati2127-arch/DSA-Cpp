#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={6,0,8,1,3};
    vector<int> ans;

    // TC=O(n*n)   SC=O(n)
    for(int i=0;i<arr.size();i++){
        bool found = false;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]>arr[i]){
                ans.push_back(arr[j]);
                found=true;
                break;
            }
            if(!found){
                ans.push_back(-1);
            }
        }
    }
    for(int x:ans){
        cout<<x<<" ";
    }

    return 0;
}