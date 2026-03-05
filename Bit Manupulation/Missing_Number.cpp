//leetcode 286
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int missingNumber(vector<int>&arr){
    int x=0;
    for(int i=0;i<=arr.size();i++){
        x^=i;
    }
        for(int i=0;i<arr.size();i++){
        x^=arr[i];
    }
    return x;

}
