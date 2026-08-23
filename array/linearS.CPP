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

    int k;
    cout<<"finding num=";
    cin>>k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"1ST ocurrence is="<<i;
            break;
        }
        
    }

    return 0;
    
}