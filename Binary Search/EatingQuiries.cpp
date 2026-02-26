#include<bits/stdc++.h>
using namespace std;

int solve(){
 int n,q;
 cin>>n>>q;
 vector<int>v(n);
 for(int i=0;i<n;i++){
    cin>>v[i];
 };
 sort(v.begin(),v.end(),-1);
 vector<int>prefix(n,0);
 for(int i=0;i<n;i++){
    prefix[i]+=v[i];
 };
 int low=0;
 int high=0;
 while(low<=high){
    int mid=low+(high-low)/2;
    if(prefix[mid]==)
 }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}