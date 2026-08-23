#include<iostream>
using namespace std;

int main(){

    // brute sol:  TC=O(n*n)   SC=O(1)
    int arr[]={1,1,2,2,3,3,4};

    // for(int i=0;i<7;i++){
    //     int num =arr[i];
    //     int count=0;
    //     for(int j=0;j<7;j++){
    //         if(arr[j]==num){
    //             count++;
    //         }
    //     }
    //     if(count==1){
    //         cout<<num;
    //     }
    // }


    //better sol:   TC=O(3n)   SC=O(max)

    // int maxi=0;
    // for(int i=0;i<5;i++){
    //      maxi=max(arr[i],maxi);
    // }
    // int hash[maxi+1]={0};

    // for(int i=0;i<5;i++){
    //     hash[arr[i]]++;
    // }

    // for(int i=0;i<7;i++){
    //     if(hash[arr[i]]==1){
    //         cout<<arr[i];
    //     }
    // }



    // optimal:  TC=O(n)   SC=O(1)
    int xor1=0;

    for(int i=0;i<7;i++){
        xor1=xor1^arr[i];
    }
    cout<<xor1;




    return 0;
}