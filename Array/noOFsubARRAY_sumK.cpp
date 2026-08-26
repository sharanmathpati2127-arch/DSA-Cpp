#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};

    map<int,int> prefsum;
    int sum=0;
    int count=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
        if(sum==3){
            count++;
        }

        int rem=sum-3;
        if(prefsum.find(rem)!=prefsum.end()){
            count++;
        }
        if(prefsum.find(rem)==prefsum.end()){
            prefsum[rem]=i;
        }
    }

    cout<<"count id="<<count;
    return 0;
}