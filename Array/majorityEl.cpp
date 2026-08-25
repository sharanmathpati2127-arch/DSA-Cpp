#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={2,2,1,3,3,2,3,2,2};
    int n=arr.size();


    // brute sol:   TC=O(n*n)    SC=O(1)
    // for(int i=0;i<n;i++){
    //     int count=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count>n/2){
    //         cout<<arr[i];
    //         break;
    //     }
    // }




    // better sol: TC=O(n+nlogn)   SC=O(n)
    // map<int,int> mpp;
    // for(int i=0;i<n;i++){
        
    //     int a=arr[i];
    //     mpp[a]++;
    //     if(mpp[a]>n/2){
    //         cout<<arr[i];
    //         break;
    //     }
        
    // }




    // optimal sol:   TC=O(n)    SC=O(1)
    // movers voting algo
     int count=0;
     int el;
       
       int n=arr.size();
       for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            count++;
        }
        else {
            count--;
        }
       }
       int count1=0;
       for(int i=0;i<n;i++){
        if(el==arr[i]) count1++;
        if(count1>n/2) return arr[i];
       }



return 0;
}