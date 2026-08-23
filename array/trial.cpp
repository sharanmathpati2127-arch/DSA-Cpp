// 1)pick pivot then small on left and large on right

#include <bits/stdc++.h>
using namespace std;

// int part(int arr[],int low,int high){
   
//     int pivot=arr[low];
//     int i=low;
//     int j=high;

//     while(i<j){
//         while(arr[i]>pivot && i<high){
//             i++;
//         }

//         while(arr[j]<=pivot && j>low){
//             j--;
//         }
//         if(i<j){
//         swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[j],arr[low]);
//     return j;
// }

// void qs(int arr[],int low,int high){
//     int i=low;
//     int j=high;
//     if(i<j){
//         int partition=part(arr,low,high);
//         qs(arr,low,partition-1);
//         qs(arr,partition+1,high);
//     }

// }


int main(){
//     int n;
//     cout<<"Enter a num=";
//     cin>>n;
//     int arr[n];

//     cout<<"Enter a array:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int low=0;
//     int high=n-1;

//     qs( arr,low,high);

// cout << "Sorted Array: ";
// for (int i = 0; i < n; i++){
// cout << arr[i] << " ";
// }




string s;
cin>>s;

int hash[26]={0};
for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++;
}

int q;
cin>>q;
char c;
while(q--){
    cin>>c;

    cout<<hash[c-'a']<<endl;

}

return 0;
}