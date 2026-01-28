#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    int i=0;
    int j=t-1;
    while(i<j){
        if(s[i]!=s[j]){
           if(abs(s[i]-s[j])!=2){
            cout<<"NO\n";
            return;
           } 
        }
        i++;
        j--;
    }
    cout<<"YES\n";
    return ;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}