#include<iostream>
using namespace std;

int main(){
 int n;
    cout<<"Enter num=";
    cin>>n;
    int arr[n];
    cout<<"enter array=";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    // 1st one brute sol  TC=O(2n)   SC=O(k)
    // int k=0;
    // int temp[n];
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=0){
    //         temp[k]=arr[i];
    //         k++;
    //     }
    // }
    // int nonzero=k;

    // for(int i=0;i<nonzero;i++){
    //     arr[i]=temp[i];
    // }

    // for(int i=nonzero;i<n;i++){
    //     arr[i]=0;
    // }





    // 2nd approch  optimal sol TC=O(n)  SC=O(1)

    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
    cout<<"New array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }





    return 0;
}