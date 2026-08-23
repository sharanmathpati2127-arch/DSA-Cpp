#include<bits/stdc++.h>
using namespace std;

// void fun(int i,int n){
//     if(i>n){
//         return;
//     }
//     else{
//         cout<<"sharan"<<endl;
//         fun(i+1,n);
//     }
// }

// int main(){
//     int n=5;
//     fun(1,n);
//     return 0;

// }


// void fun(int i,int n){
//     if(i<0){
//         return;
//     }
//     else{
//         cout<<i<<endl;
//         fun(i-1,n);
//     }
// }
// int main(){
//     int n=5;
//     fun(5,n);
//     return 0;
// }


// void fun(int i,int n){
//     if(i<0){
//         return;
//     }
//     else{
//         fun(i-1,n);
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int n=5;
//     fun(n,n);
//     return 0;
// }



// void fun(int i,int n){
//     if(i>n){
//         return;
//     }
//     else{
//         fun(i+1,n);
//         cout<<i<<endl;
//     }
// }
// int main(){
//     int n=5;
//     fun(1,n);
//     return 0;
// }



void fun(int sum,int n){
    if(n<1){
        cout<<sum;
        return;
    }
    else{
        fun(n-1,sum+1);
    }
}
int main(){
    int n=5;
    fun(0,n);
    return 0;
}