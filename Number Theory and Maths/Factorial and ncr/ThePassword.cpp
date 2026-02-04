#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ncr(int n,int r){
    if(r==0 || r==1) return 1;
    if(r>n){
        return 0;
    }
    return ncr(n-1,r-1)+ncr(n-1,r);
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
    }
    cout<<ncr(10-n,2)*ncr(4,2);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}