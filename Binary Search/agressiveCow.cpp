#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(int n,int c,vector<int>&stal,int mid){
    int cowCount=1;
    int lastCowPosition=stal[0];
    for(int i=1;i<n;i++){
        if(stal[i]-lastCowPosition>=mid){
            cowCount++;
            lastCowPosition=stal[i];
        }
    }
    if(cowCount<c){
        return false;
    }
    return true;
}

void solve(){
    int n,c;
    cin>>n>>c;
    vector<int>stal(n);
    for(int i=0;i<n;i++){
        cin>>stal[i];
    }
    sort(stal.begin(),stal.end());
    int low=1;
    int high=stal[n]-stal[0];
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;
         if(check(n,c,stal,mid)){
            ans=mid;
            low=mid+1;
         }
         else{
            high=mid-1;
         }
        
    }
    cout<<ans;
}
int main(){
    int t;
    cin>>t;
   
    while(t--){
        solve();
    }

}