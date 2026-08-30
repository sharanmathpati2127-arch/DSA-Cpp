#include<bits/stdc++.h>
using namespace std;

// Brute sol is:
// find n ,r ,(n-r)  seprate

// to find element of nth row and rth col
//n-1cr-1


// to find entire pascals triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
    
        for(int row=1;row<=numRows;row++){
            vector<int> temp;
            long long prod=1;

            for(int col=1;col<=row;col++){
                temp.push_back(prod);
                prod=prod*(row-col)/col;
            }
            ans.push_back(temp);
        }
        return ans;

    }
};




// to find row of the PT:
class Solution {
public:

    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long prod=1;
        for(int c=1;c<=rowIndex+1;c++){
            ans.push_back(prod);
            prod=(prod*(rowIndex+1-c))/c;
        }
        return ans;
    
    }
};