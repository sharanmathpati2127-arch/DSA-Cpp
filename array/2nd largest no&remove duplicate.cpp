#include<iostream>
using namespace std;

int main(){

    // largest num:
    int arr[6]={3,5,4,9,7,6};
    // int large=arr[0];

//     for(int i=0;i<6;i++){
//         if(arr[i]>large){
//             large=arr[i];
//         }
//     }

// cout<<"large num is="<<large<<endl;

    //2nd largets:(for the sorted array)   TC=nlogn+n (brute)
    // for(int i=5;i>=0;i--){
    //     if(arr[i]>arr[i-1]){
    //         cout<<"2nd largest is="<<arr[i-1];
    //         break;
    //     }
    // }



    // for non soerted array:    TC=O(2N) (better)
    // int large_2nd=-1;
    // for(int i=0;i<6;i++){
    //     if(arr[i]!=large && arr[i]>large_2nd){
    //         large_2nd=arr[i];
    //     }
    // }
    // cout<<"large_2nd num is="<<large_2nd<<endl;



 

    // int large_2nd=-1;   TC=O(N) (optimal)
    // for(int i=0;i<6;i++){
    //     if(arr[i]>large){
    //         large_2nd=large;
    //         large=arr[i];
    //     }

    //     else if(arr[i]<large && arr[i]>large_2nd){
    //         large_2nd=arr[i];
    //     }
    // }

    // cout<<large<<endl;
    // cout<<large_2nd;





    // 2nd smallest:
    // int smallest=arr[0];
    // int small2=INT32_MAX;   
    // for(int i=0;i<6;i++){
    //     if(arr[i]<smallest){
    //         small2=smallest;
    //         smallest=arr[i];
    //     }

    //     else if(arr[i]>smallest && arr[i]<small2 ){
    //         small2=arr[i];
    //     }
    // }

    // cout<<smallest<<endl;
    // cout<<small2;




    // check array is sorted or not
    // int n;
    // cout<<"enter a n=";
    // cin>>n;
    // int arr2[n];
     
    // cout<<"Enter array:";
    // for(int i=0;i<n;i++){
    //     cin>>arr2[i];
    // }

    // for(int i=0;i<n;i++){
    //     if(arr[i+1]>=arr[i]){

    //     }
    //     else{
    //         return false;
    //     }
    //     return true;
    // }



    // remove duplicate elements:

    int arr3[6]={1,1,2,2,3,3};

    int i=0;

    for(int j=1;j<6;j++){
            if(arr3[j]!=arr3[i]){
                arr3[i+1]=arr3[j];
                i++;
            }
        }
        //i=i+1;

    cout<<"After removing duplicate element:";
    for(int j=0;j<=i;j++){
        cout<<arr3[j]<<"  ";
    }

   

    
    return 0;
}