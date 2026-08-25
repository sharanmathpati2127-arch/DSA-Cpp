#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> arr={102,4,100,1,101,3,2,1,5};
    // int length=1;

    // brute sol:   TC=O(n*n)     SC=O(n)
    // for(int i=0;i<arr.size();i++){
    //     int count=1;
    //     int el=arr[i];
    //     for(int j=0;j<arr.size();j++){
    //         if(arr[j]==el+1){
    //             count++;
    //             el=arr[j];
    //             j=-1;
    //         }
    //     }
    //     length=max(count,length);
    // }
    // cout<<length;




    // better sol:  TC=O(nlogn+n)
    // FOR sorted array
    vector<int> arr={1,1,1,2,2,3,3,4,100,100,101,101,102};
    int length=1;
    int count=0;
    int last_small=INT_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i]-1==last_small){
            count++;
            last_small=arr[i];
        }
        else if(arr[i]!=last_small){
            count=1;
            last_small=arr[i];
        }

        length=max(count,length);
    }
cout<<length;





// optimal sol: TC=O(3n)   SC=O(n)

//         unordered_set<int> st;
//         int n=nums.size();
//         if(n==0){
//             return 0;
//         }
//         int length=1;


//         for(int i=0;i<n;i++){
//             st.insert(nums[i]);
//         }

//         for(auto it:st){
//             if(st.find(it-1)==st.end()){
//                 int x=it;
//                 int count=1;
//                 while(st.find(x+1)!=st.end()){
//                     count++;
//                     x=x+1;
//                 }
//                 length=max(length,count);
                
//             }
//         }
//         return length;
//     }
// };
    return 0;
}