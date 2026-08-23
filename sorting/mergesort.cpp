#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid ,int high){
    int temp[100];
    int left=low;
    int right=mid+1;
    int k=low;

    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp[k]=arr[left];
            left++;
            
        }
        else{
            temp[k]=arr[right];
            right++;
            
    }
    k++;
}   
    while(left<=mid){
        temp[k]=arr[left];
        left++;
        k++;
        
    }
    while(right<=high){
        temp[k]=arr[right];
        right++;
        k++;
    }

for (int i = low; i <= high; i++){
arr[i] = temp[i];
}
}


void ms(int arr[],int low,int high){
    ;
    if(low==high){
        return;
    }
    int mid=(low+high)/2;

    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}



int main(){
    int n;
    cout<<"Enter a num=";
    cin>>n;
    int arr[n];

    cout<<"Enter a array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 ;
    ms(arr,0,n-1);

cout << "Sorted Array: ";
for (int i = 0; i < n; i++){
cout << arr[i] << " ";
}

    return 0;
}

// tc=nlogn
// sc=n