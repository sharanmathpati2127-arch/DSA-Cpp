#include<iostream>
using namespace std;

int main(){
int arr[5]={1,2,4,5};
// for(int i=0;i<5-1;i++){
//     if(arr[i]!=arr[i-1]+1){
//         cout<<"missing value is=";
//         cout<<arr[i-1]+1;
//         break;
//     }
//     else if(arr[0]!=1){
//         cout<<"missing value is=";
//         cout<<arr[0];
//         break;
//     }
// }





// //better sol:  TC=O(2n)   SC=O(n)
// int hash[5+1]={0};
// for(int i=0;i<5;i++){
//     hash[arr[i]]=1;
// }
// for(int i=1;i<5+1;i++){
//     if(hash[i]==0){
//          cout<<"Num is i="<<i;
//         }
//     }





// optimal sol_1:  TC=O(N)  SC=O(1)
// int sum=5*(5+1)/2;
// int sum1=0;
// for(int i=0;i<5-1;i++){
//     sum1=sum1+arr[i];
// }

// int missing_value=sum-sum1;
// cout<<"Missing value="<<missing_value;






//optimal sol_2:  TC=O(n)  

int xor1=0;
int xor2=0;
for(int i=0;i<5;i++){
    xor1=xor1^(i+1);
    xor2=xor2^arr[i];
}


cout<<"missing value="<<(xor1^xor2);



    return 0;
}





