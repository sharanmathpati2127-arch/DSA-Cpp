#include <bits/stdc++.h>
using namespace std;

int main(){

    // brutte sol : Merge sorting



    // better sol:    TC=O(2n)   SC=O(n)
    vector<int> arr={0,1,2,0,1,2,1,2,0,0,0,1};
    int c1=0;
    int c2=0;
    int c=0;
    int n=arr.size();

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c++;
        }
        else if(arr[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }

    for(int i=0;i<c;i++){
        arr[i]=0;
    }
    for(int i=c;i<c+c1;i++){
        arr[i]=1;
    }
    for(int i=c+c1;i<c+c1+c1;i++){
        arr[i]=2;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    


    // optimal sol:deatch national flag algo
    // TC= O(n)     SC=O(1)
    // that 3 steps are imp:

    // int n=nums.size();
    //     int low=0;
    //     int mid=0;
    //     int high=n-1;

    //     for(int i=0;i<n;i++){
    //         if(nums[mid]==0){
    //             int temp=nums[mid];
    //             nums[mid]=nums[low];
    //             nums[low]=temp;
    //             mid++;
    //             low++;
    //         }
    //         else if(nums[mid]==1){
    //             mid++;
    //         }
    //         else{
    //             int temp=nums[mid];
    //             nums[mid]=nums[high];
    //             nums[high]=temp;
    //             high--;
    //         }
    //     }

        return 0;

}

