#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"*"<<" ";
    //     }
    // cout<<endl;
    // }


// int n;
// cout<<"enter n=";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"*"<<" ";
//         }
//     cout<<endl;
//     }



// int n;
// cout<<"enter n=";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<(j+1)<<" ";
//         }
//     cout<<endl;
//     }



// int n;
// cout<<"enter n=";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<(i)<<" ";
//         }
//     cout<<endl;
//     }
// return 0;



// int n;
// cout<<"enter n=";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<n-i+1;j++){
//             cout<<j<<" ";
//         }
//     cout<<endl;
//     }

// int n;
// cout<<"enter n=";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//                 cout<<"*";
//         }
//         for(int j=0;j<n-i-1;j++){
//                     cout<<" ";
//         }  
//     cout<<endl;
//     }


// int n;
// cout<<"enter n=";
//     cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<2*i+1;j++){
    //             cout<<"*";
    //     }
    //     for(int j=0;j<n-i-1;j++){
    //                 cout<<" ";
    //     }  
    // cout<<endl;
    // }



// int n;
// cout<<"enter n=";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-2*i-1;j++){
//                 cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//                     cout<<" ";
//         }  
//     cout<<endl;
//     }


// int n;
// cout<<"enter n=";
//     cin>>n;
//         for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//                 cout<<"*";
//         }
//         for(int j=0;j<n-i-1;j++){
//                     cout<<" ";
//         }  
//     cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-2*i-1;j++){
//                 cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//                     cout<<" ";
//         }  
//     cout<<endl;
//     }




// int n;
// cout<<"enter n=";
//     cin>>n;

//     for(int i=1;i<=2*n-1;i++){
//         int stars=i;
//         if(i>n) stars=2*n-i;
//         for(int j=1;j<=stars;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }




// int n;
// cout<<"enter n=";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=1;j<=2*(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }




// int n;
// cout<<"enter n=";
// int k=1;
//     cin>>n; 

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<k<<" ";
//             k+=1;
//         }cout<<endl;
//     }



// int n;
// cout<<"enter n=";
// int k=1;
//     cin>>n; 

//     for(int i=0;i<n;i++){
//         for(char ch='A';ch<='A'+i;ch++){
//             cout<<ch<<" ";
//         }cout<<endl;
//     }



// int n;
// cout<<"enter n=";
// int k=1;
//     cin>>n; 

//     for(int i=0;i<n;i++){
//         for(char ch='A';ch<='A'+(n-i-1);ch++){
//             cout<<ch<<" ";
//         }cout<<endl;
//     }



// int n;
// cout<<"enter n=";
// int k=1;
//     cin>>n; 

//     for(int i=0;i<n;i++){
//         char ch='A'+i;
//         for(int j=0;j<=i;j++){
//             cout<<ch<<" ";
//         }cout<<endl;
//     }



// int n;
// cout<<"enter n=";
//     cin>>n; 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<(n-i-1);j++){
//             cout<<" ";
//         }
//         char ch='A';
//         int breakpoint=(2*i+i)/2;
//         for(int j=1;j<=2*i+1;j++){
//             cout<<ch;
//             if(j<breakpoint) ch++;
//             else ch--;
//         }
//         for(int j=0;j<(n-i-1);j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }




// int n;
// cout<<"enter n=";
//     cin>>n; 
//     for(int i=0;i<n;i++){
//         for(char ch='E'-i;ch<='E';ch++){
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }




// int n;
// cout<<"enter n=";
//     cin>>n; 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*"<<" ";
//         }
//         for(int j=0;j<2*i;j++){
//             cout<<" "<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<"*"<<" ";
//         }cout<<endl;
//     }

//        for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         for(int j=0;j<2*(n-i)-2;j++){
//             cout<<" "<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<"*"<<" ";
//         }cout<<endl;
//     }



// int n;
// cout<<"enter n=";
//     cin>>n;
//     int spaces=2*n-2;
//     for(int i=1;i<=2*n-1;i++){
//         int star=i;
//         if(i>n) star=2*n-i; 
//         for(int j=1;j<=star;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=spaces;j++){
//             cout<<" ";

//         }
//            for(int j=1;j<=star;j++){
//             cout<<"*";
//         }cout<<endl;
//         if(i<n) spaces-=2;
//         else spaces +=2;
//     }



int n;
cout<<"enter n=";
    cin>>n;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==n-1 || j==0 || j==n-1){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
                
            }cout<<endl;
        }
return 0;
}