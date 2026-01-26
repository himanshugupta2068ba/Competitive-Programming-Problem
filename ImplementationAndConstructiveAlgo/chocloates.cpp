#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    ans+=arr[n-1];
    int mx=arr[n-1]-1;
    for(int i=n-2;i>=0;i--){
       ans+=min(mx,arr[i]);
       mx=min(mx,arr[i])-1; 
       if(mx<=0) break;
    }
    cout<<ans;
    return 0;
}