#include <bits/stdc++.h>
using namespace std;

void mark_row(vector<vector<int>>& arr, int i) {
    for(int j = 0; j < 4; j++) {
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}

void mark_col(vector<vector<int>>& arr, int j) {
    for(int i = 0; i < 4; i++) {
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}

int main() {

    vector<vector<int>> arr = {
        {1,1,1,1},
        {1,0,0,1},
        {1,1,0,1},
        {1,1,1,1}
    };


    // brute sol:   TC=O(n*m*(n+m) + n*m)    SC=O(1)
    // for(int i = 0; i < 4; i++) {
    //     for(int j = 0; j < 4; j++) {

    //         if(arr[i][j] == 0) {
    //             mark_row(arr, i);
    //             mark_col(arr, j);
    //         }

    //     }
    // }

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         if(arr[i][j]==-1){
    //             arr[i][j]=0;
    //         }
    //     }
    // }

    // // Print matrix
    // for(int i = 0; i < 4; i++) {
    //     for(int j = 0; j < 4; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }





    // better sol:   

    vector<int> row={0};
    vector<int> col={0};
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(row[i] || col[j]){
                arr[i][j]=0;
            }
        }
    }


    // Print matrix
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}