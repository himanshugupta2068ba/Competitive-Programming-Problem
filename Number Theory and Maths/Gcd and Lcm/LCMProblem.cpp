#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int lcm(int a,int b){
//     return a*b/gcd(a,b);
// }
// int gcd(int a,int b){
//     if(b==0) return a;
//     return gcd(b,a%b);
// }
void solve(){
    long long l,r;
    cin>>l>>r;
    long long x=l;
    long long y=2*l;
    if(y<=r){
        cout<<x<<" "<<y;
    }else cout<<"-1";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}