#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    int m;

    cout<<"Enter n=";
    cin>>n;
    int arr1[n];
    cout<<"enter array 1=";

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Enter m=";
    cin>>m;
    int arr2[m];
    cout<<"enter array 2=";

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    //1st approch: brute  TC=O(n*m)  SC=O(m)
    // int vis[m]={0};

    // int k=0;
    // int ans[m+n];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(arr1[i]==arr2[j] && vis[j]==0){
    //             ans[k]=arr1[i];
    //             vis[j]=1;
    //             k++;
    //             break;
    //         }
    //         if(arr2[j]>arr1[i]){
    //             break;
    //         }
    //     }
    // }

    // cout<<"Intersection:";
    // for(int i=0;i<k;i++){
    //     cout<<ans[i]<<"  ";
    // }


    // 2nd approch:  TC=O(n+m)   SC=O(1)
    int i=0;
    int j=0;

    int k=0;
    int ans[0];
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            ans[i]=arr1[i];
            i++;
            j++;
            k++;
        }
    }
    cout<<"Intersection:";
    for(int i=0;i<k;i++){
        cout<<ans[i]<<"  ";
    }


    return 0;
}