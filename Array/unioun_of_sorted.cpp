#include<iostream>
#include<set>
using namespace std;

int main(){

    // set<int> s;
    // int n;
    // int m;

    // cout<<"Enter n=";
    // cin>>n;
    // int arr1[n];
    // cout<<"enter array 1=";

    // for(int i=0;i<n;i++){
    //     cin>>arr1[i];
    // }


    // cout<<"Enter m=";
    // cin>>m;
    // int arr2[m];
    // cout<<"enter array 2=";

    // for(int i=0;i<n;i++){
    //     cin>>arr2[i];
    // }

    // 1st approch: brute sol TC=O(nlogn+mlogm) + O(n+m)  SC=O(n+m)
    // for(int i=0;i<n;i++){
    //     s.insert(arr1[i]);
    // }

    // for(int i=0;i<m;i++){
    //     s.insert(arr2[i]);
    // }

    // int unioun[100];
    // int i=0;
    // for(auto x:s){
    //     unioun[i]=x;
    //     i++;
    // }

    // for(int i=0;i<s.size();i++){
    //     cout<<unioun[i]<<"  ";
    // }



    // 2nd approch:optimal sol  TC=O(n+m)  SC=O(n+m)
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 3, 5, 6};

    int n = 5;
    int m = 4;

    int ans[100];
    int k = 0;

    int i = 0, j = 0;

    // Common part
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (k == 0 || ans[k - 1] != arr1[i])
                ans[k++] = arr1[i];
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            if (k == 0 || ans[k - 1] != arr2[j])
                ans[k++] = arr2[j];
            j++;
        }
        else {
            if (k == 0 || ans[k - 1] != arr1[i])
                ans[k++] = arr1[i];

            i++;
            j++;
        }
    }

    // Remaining elements of arr1
    while (i < n) {
        if (k == 0 || ans[k - 1] != arr1[i])
            ans[k++] = arr1[i];
        i++;
    }

    // Remaining elements of arr2
    while (j < m) {
        if (k == 0 || ans[k - 1] != arr2[j])
            ans[k++] = arr2[j];
        j++;
    }

    cout << "Union = ";
    for (int x = 0; x < k; x++) {
        cout << ans[x] << " ";
    }

    return 0;
}

