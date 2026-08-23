#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter a num=";
    cin>>n;
    int arr[n];
    cout<<"Enter a array=";
    for(int i=0;i<n;i++){
    cin>>arr[i];
}

// Selection sort:(SELECT MINIMUM AND SWAP)
    // for(int i=0;i<n;i++){
    //     int min=i;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[min]>arr[j]){
    //             min=j;
    //         }
    //     }
    //     int temp=arr[i];
    //     arr[i]=arr[min];
    //     arr[min]=temp;
    // }

// cout<<"Sorted arry=";
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }



// BUBLE SORT:(sort largest element)
// for(int i=n-1;i>=1;i--){
//     for(int j=0;j<=i-1;j++){
//         if(arr[j]>arr[j+1]){
//             int temp=arr[j+1];
//             arr[j+1]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }




// INSERTION SORT:(take a element and place it is at correct position)

// for(int i=0;i<n;i++){
//     int j=i;
//     while(j>0 && arr[j-1]>arr[j]){
//         int temp=arr[j-1];
//         arr[j-1]=arr[j];
//         arr[j]=temp;
//         j--;
//     }


// }


// cout<<"Sorted arry=";
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }

    return 0;
}