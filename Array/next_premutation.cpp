#include <bits/stdc++.h>
using namespace std;


int main(){
    // brute sol:
    //1) Generate all sorted
    //2)linear search
    //3)next index of 2nd last's element
    //we do not use brute sol because of TC=n!*n


    // Better sol:
    // by using STL



    // optimal sol:
    // process:
    //1) long prefix arr upto arr[i]<arr[i+1]
    //2) put sightly greater than arr[i]
    //3) remaining elements put in sorted order

    
    vector<int> arr={3,1,2};


    return 0;
}