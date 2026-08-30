#include <bits/stdc++.h>
using namespace std;


int main(){

    vector<int> arr;
    arr={4,2,2,6,4};
    int count=0;
    int m=6;

    // better sol: TC=O(n^2)
// for(int i=0;i<arr.size();i++){
//         int xo=0;
//         for(int j=i;j<arr.size();j++){
//             xo=xo^arr[j];
//             if(xo==m){
//             count++;
//         }
//     }
// }
//     cout<<"no.of subarray is="<<count;




    // optimal sol: TC=O(nlogn)   SC=O(n)
    map<int,int> mpp;
    int n=arr.size();
    mpp[0]=1;
    int xr=0;

    for(int i=0;i<n;i++){
        xr=xr^arr[i];
        int x=xr^m;

        if(mpp.find(x)!=mpp.end()){
            count+=mpp[x];
        }
        mpp[xr]++;
    }
    cout<<count; 
    return 0;

}