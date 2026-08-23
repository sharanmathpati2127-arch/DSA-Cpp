#include<iostream>
using namespace std;

void reverse(int arr[],int start ,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

int main(){
    int n;
    cout<<"Enter num=";
    cin>>n;
    int arr[n];
    cout<<"enter array=";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    // left roated array by one
    // int temp=arr[0];
    // for(int i=1;i<n;i++){
    //     arr[i-1]=arr[i];
    // }

    // arr[n-1]=temp;
    // cout<<"New array=";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"  ";

    // }





     // left roated array by D places
    
     int d;
     cout<<"Enter d=";
     cin>>d;
     d=d%n;

     
    // 1st approch1:  TC=O(n*d)  SC=o(1)
    //  for(int i=0;i<d;i++){
    //     int temp=arr[0];
    //     for(int j=1;j<n;j++){
    //         arr[j-1]=arr[j];
    //     }
    //     arr[n-1]=temp;
    //  }

    // cout<<"New array=";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"  ";
    // }


    // 2nd approch: Brutee sol TC=O(n+d)  SC=O(d)
    // int temp[d];

    // for(int i=0;i<d;i++){
    //     temp[i]=arr[i];
    // }

    // for(int i=d;i<n;i++){
    //     arr[i-d]=arr[i];
    // }

    // for(int i=n-d;i<n;i++){
    //     arr[i]=temp[i-(n-d)];
    // }

    // cout<<"New array=";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"  ";
    // }




    // 3rd approch:  Optimal sol  TC=(2n)  SC=O(1)

    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

    cout<<"New array=";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }



return 0;
    }