// #include <iostream>
// using namespace std;

// int main(){
//     int arr[6]={3,1,-2,-5,2,-4};
//     int n=6;

  
    // brute sol:  TC=O(2n)   SC=O(n)
    // int l=0;
    // int m=0;
    // int pos[n];
    // int neg[n];

    // for(int i=0;i<n;i++){
    //     if(arr[i]>0){
    //         pos[l]=arr[i];
    //         l++;
    //     }
    //     if(arr[i]<0){
    //         neg[m]=arr[i];
    //         m++;
    //     }
    // }

    // for(int i=0;i<n/2;i++){
    //     arr[2*i]=pos[i];
    //     arr[2*i+1]=neg[i];
    // }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }



    
    // optimal sol:  TC=O(n)    SC=O(n)
    // int ans[n];

    // int neg=1;
    // int pos=0;

    // for(int i=0;i<n;i++){
    //     if(arr[i]>0){
    //         ans[pos]=arr[i];
    //         pos=pos+2;
    //     }
    //     else{
    //         ans[neg]=arr[i];
    //         neg=neg+2;
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     cout<<ans[i]<<" ";
    // }


//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;


int main(){

    // POS AND NEG ARE NOT EQUAL
    //TC=O(2n)    SC=O(n)
    vector<int> arr={1,2,-4,-5,3,9,8};
    vector<int> pos,neg;

    int n=arr.size();

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=2*neg.size();
        for(int i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
        }
    }

    else{
        for(int i=0;i<pos.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=2*pos.size();
        for(int i=pos.size();i<neg.size();i++){
            arr[index]=neg[i];
            index++;
        }

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}