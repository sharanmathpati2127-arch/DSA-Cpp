#include<iostream>
using namespace std;

int main(){
    int arr[9]={1,1,0,1,1,1,0,1,1};
    int maxi=0;
    int count=0;
    for(int i=0;i<9;i++){
        if(arr[i]==1){
            count=count+1;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }

    cout<<maxi;

    return 0;
}